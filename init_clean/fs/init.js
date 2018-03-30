load('api_config.js');
load('api_gpio.js');
load('api_net.js');
load('api_sys.js');
load('api_timer.js');
load('api_http.js');
load('api_uart.js');
load('api_rpc.js');
load('api_adc.js');

let UART_NO=0;
let rxAcc = ""; // to store all the bytes received
let rx_total = 0; // total number of received bytes
let uart_set=0; //UART Handler Set Flag


let HOST="http://192.168.1.4/";
let connected=0; //WIFI Station Connected

  Cfg.set( {wifi: {sta: {ssid: "WIFI_SSID"}}} );
  Cfg.set( {wifi: {sta: {pass: "WIFI_PASSWD@WIFI_SSID"}}} );
  Cfg.set({wifi: {sta: {enable: true}}});
  print("WIFI CONFIGURED");


  Cfg.set( {wifi: {ap: {ssid: "MONG_TEST"}}} );
  Cfg.set( {wifi: {ap: {pass: "password"}}} );
  Cfg.set({wifi: {ap: {enable: true}}});
  print("AP CONFIGURED");



/***************************FUNCTIONS********************************/
let getCfg=function(cfg_path){


             return Cfg.get(cfg_path);

};
let getAPConfig=function(){


HTTP.query({
			  url: http_url,
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
			  		let cfg=JSON.parse(body);
			  		save_cfg(cfg);
			  		init_def();

			  },
			  error: function(err) { print(err); },  // Optional
			});




};

let addUARTHandler=function(baud_rate,clear_delay){
  
  
    print("Starting Serial Data Read Haandler");
    if(uart_set===0){
      uart_set=1;
              
        UART.setConfig(UART_NO,{
          baudRate: baud_rate,
        });
        
        
        Timer.set(clear_delay,Timer.REPEAT,function(){
          
          //rxAcc="";
          
        },null);
        
          UART.setDispatcher(UART_NO, function(uartNo, ud) {
            let ra = UART.readAvail(uartNo);
            if (ra > 0) {
              
              
              
              let data = UART.read(uartNo);
              prev_sr=data;
              rxAcc = data;
              rx_total += data.length;  
              print("len:", data.length, "total:", rx_total);
            }
          }, null);

    }
    
};

let prev_sr='';

let getInfo = function() {
  return ({
    total_ram: Sys.total_ram(),
    free_ram: Sys.free_ram()
  });
};

/******************RPC Handlers*******************************/

RPC.addHandler('about_device', function(args) {
  
    return {ram:getInfo()};
    
});

RPC.addHandler('uart_enable', function(args) {
  
    addUARTHandler(4800,1000);
    return {res:"UART0 Enabled ! Clearing after 10s"};
    
});

    
RPC.addHandler('read_uart', function(args) {
  
    //var dat=rxAcc.substring(rxAcc.lastIndexOf("$")+1,rxAcc.lastIndexOf("~"));

    return {res:"Serial Data Buffer Val $~ !",rxd:rxAcc,parsed:prev_sr,type:typeof(prev_sr)};
    
});
    
    
RPC.addHandler('read', function(args) {
  
  

  
  print('TYPE is '+JSON.stringify(args));
  
  if (typeof(args) === 'object' && typeof(args.api_key) === 'string' &&
      typeof(args.read_id) === 'number') {
    
    let ob={
      serial:rxAcc,
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
    return {error: -1, message: 'Unexpected type : '+typeof(args.api_key)};
  }
    
});
    
/*************************MAIN*******************************************/

print("START");


/***************CONNECTION *******************************/

Net.setStatusEventHandler(function(ev, arg) {
  let evs = '???';
  if (ev === Net.STATUS_DISCONNECTED) {
    evs = 'DISCONNECTED';
  } else if (ev === Net.STATUS_CONNECTING) {
    evs = 'CONNECTING';
  } else if (ev === Net.STATUS_CONNECTED) {
    evs = 'CONNECTED';
    connected=1;
    print("IP : "+  Cfg.get("wifi.sta.ip"));
    
  } else if (ev === Net.STATUS_GOT_IP) {
    evs = 'GOT_IP';
  }
  print('== Net event:', ev, evs);

}, null);





