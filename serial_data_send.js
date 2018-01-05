load('api_config.js');
load('api_gpio.js');
load('api_net.js');
load('api_sys.js');
load('api_timer.js');
load('api_http.js');
load('api_uart.js');
load('api_rpc.js');

let led = Cfg.get('pins.led');
let button = Cfg.get('pins.button');
let topic = '/devices/' + Cfg.get('device.id') + '/events';

let set_static_ap=1;

print('LED GPIO:', led, 'button GPIO:', button);

 	//Cfg.set({wifi: {ap: {enable: false}}});
 	
 	

 	
let connected=0;
/**/	Cfg.set( {wifi: {sta: {ssid: "jarvis"}}} );
	Cfg.set( {wifi: {sta: {pass: "goforit@delhi"}}} );
 	Cfg.set({wifi: {sta: {enable: true}}});
 	print("WIFI CONFIGURED");
 connected=1;
let getInfo = function() {
  return JSON.stringify({
    total_ram: Sys.total_ram(),
    free_ram: Sys.free_ram()
  });
};
let ap_config_done=0;
let ap_config_got=0;
// Blink built-in LED every second
GPIO.set_mode(led, GPIO.MODE_OUTPUT);
Timer.set(3000 /* 1 sec */, true /* repeat */, function() {
  let value = GPIO.toggle(led);
  //print("Hello woddrld after 3s");
 //print(value ? 'Tick   ss  Tock' : 'Tock', 'uptime:', Sys.uptime(), getInfo());

  if(ap_config_got===0&&set_static_ap===0){
    
  let http_url="http://192.168.1.16/get_ap_data.php";

  httpCall(http_url);
  
  }
  else if(ap_config_got===0){
        
        ap_config_got=1;
	Cfg.set( {wifi: {ap: {ssid: "MONG_TEST"}}} );
	Cfg.set( {wifi: {ap: {pass: "password"}}} );  
	

 	Cfg.set({wifi: {ap: {enable: true}}});

  print("AP CONFIGURED with SSID "+("MONG_TEST : password"));


RPC.addHandler('hello', function(args) {
 
 return ("Hello world from ESP8266 ");
 
});


RPC.addHandler('read_water_flow', function(args) {
  
    print("Starting Serial Data Read Haandler");
    
UART.setConfig(UART_NO,{
  baudRate: 4800,
});



  UART.setDispatcher(UART_NO, function(uartNo, ud) {
    let ra = UART.readAvail(uartNo);
    if (ra > 0) {
      
      let data = UART.read(uartNo);
      
      if(data==='$'){
        rxAcc="";
      }
      
      rxAcc += data;
      rx_total += data.length;  
      print("len:", data.length, "total:", rx_total);
    }
  }, null);
  
  
  
  

  print('TYPE is '+JSON.stringify(args));
  
  if (typeof(args) === 'object' && typeof(args.api_key) === 'string' &&
      typeof(args.sensor_id) === 'number') {
    
    let ob={
      sensor_10:"->"+(rxAcc),
      free_ram:Sys.free_ram(),
      uptime:Sys.uptime(),
      status:"Success"
    };
    
    if(!(args.api_key==="AEZAKMI"))
    {
      
        ob={
         
      error:"Invalid API Key",
      status:"Failure"
    };
      
    }
    
    print("RESP is "+JSON.stringify(ob));
    return ob;
    
  } else {
    //Bad request. Expected: {"a":N1,"b":N2}
    return {error: -1, message: 'Unexpected type : '+typeof(args.a)};
  }

  
});




RPC.addHandler('Sum', function(args) {
  
  if (typeof(args) === 'object' && typeof(args.a) === 'number' &&
      typeof(args.b) === 'number') {
    return args.a + args.b;
  } else {
    //Bad request. Expected: {"a":N1,"b":N2}
    return {error: -1, message: 'Unexpected'};
  }

  
});


print("RPC Handler SET");


  }
}, null);






let httpCall=function(url){
  

print("REQUESTING "+url);
			HTTP.query({
			  url: url,
			  headers: { 'X-q': 'query' },     // Optional - headers
			  data: {ram: Sys.free_ram(), q: 'Mongoose OS'},      // Optional. If set, JSON-encoded and POST-ed
			  success: function(body, full_http_msg) { 



						/*
							Sample cfg Structure

							let cfg={
								udid: "DEV123456789ABCDE"
								ap_ssid : "ESP_DEV123456789ABCDE"
								ap_passwd: "Mongoose_DEV123456789ABCDE"
	
							};
							
						*/

			  		print(body);
            if(body.length>5){
              ap_config_got=1;
            }			  	  
  if(ap_config_done===0)
  {
    ap_config_done=ap_config_done+1;


  let cf=JSON.parse(body);
    
	Cfg.set( {wifi: {ap: {ssid: cf.ssid}}} );
	Cfg.set( {wifi: {ap: {pass: cf.pass}}} );    Sys.usleep(5000);

 	Cfg.set({wifi: {ap: {enable: true}}});
print("AP CONFIGURED with SSID "+Cfg.get("wifi.ap.ssid"));

    
  }
  
  

			  	
			  },
			  error: function(err) { print(err); },  // Optional
			});
};


















// Publish to MQTT topic on a button press. Button is wired to GPIO pin 0
GPIO.set_button_handler(button, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 200, function() {
  let message = getInfo();
  let ok = MQTT.pub(topic, message, 1);
  print('Published:', ok, topic, '->', message);
}, null);

// Monitor network connectivity.
Net.setStatusEventHandler(function(ev, arg) {
  let evs = '???';
  if (ev === Net.STATUS_DISCONNECTED) {
    evs = 'DISCONNECTED';
  } else if (ev === Net.STATUS_CONNECTING) {
    evs = 'CONNECTING';
  } else if (ev === Net.STATUS_CONNECTED) {
    evs = 'CONNECTED';
   // print("IP : "+	Cfg.get("wifi.sta.ip"));
    
  } else if (ev === Net.STATUS_GOT_IP) {
    evs = 'GOT_IP';
  }
  print('== Net event:', ev, evs);
}, null);





let UART_NO=0;
let rxAcc = ""; // to store all the bytes received
let rx_total = 0; // total number of received bytes
// Configure UART at 115200 baud

