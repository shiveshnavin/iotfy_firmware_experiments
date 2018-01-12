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

let ADC_PIN=5;
let adc_enabled=0;

let TDS_PIN=2;
let tds_count=0;

let HOST="http://192.168.1.4/";
let connected=0; //WIFI Station Connected

  Cfg.set( {wifi: {sta: {ssid: "jarvis"}}} );
  Cfg.set( {wifi: {sta: {pass: "goforit@delhi"}}} );
  Cfg.set({wifi: {sta: {enable: true}}});
  print("WIFI CONFIGURED");



/***************************FUNCTIONS********************************/
let getCfg=function(cfg_path){


             return Cfg.get(cfg_path);

};
let getAPConfig=function(){

		let http_url=HOST+"get_cfg.php";
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
          
          rxAcc="";
          
        },null);
        
          UART.setDispatcher(UART_NO, function(uartNo, ud) {
            let ra = UART.readAvail(uartNo);
            if (ra > 0) {
              
              let data = UART.read(uartNo);
               
              
              rxAcc += data;
              rx_total += data.length;  
              print("len:", data.length, "total:", rx_total);
            }
          }, null);

    }
    
};


let readADC=function(){
  
    if(adc_enabled===0)
      adc_enabled=ADC.enable(0);
  
    let adc_val=ADC.read(0);
    print('ADC VAL : ',adc_val);
    let adc_volt=(1.1/1024)*adc_val;
    return {res:"ADC Value Read !",val:adc_val,volt:adc_volt};
    
    
};


let addIntrHandler=function(pin){
  
      
    GPIO.set_mode(pin, GPIO.MODE_INPUT);
    GPIO.set_int_handler(pin, GPIO.INT_EDGE_NEG, function(pin) {
      
       print('Pin', pin, 'got interrupt and Count is',++tds_count);
       
    }, null);
    GPIO.enable_int(pin);



};

let getInfo = function() {
  return ({
    total_ram: Sys.total_ram(),
    free_ram: Sys.free_ram()
  });
};

/******************RPC Handlers*******************************/

RPC.addHandler('about_device', function(args) {
  
    return {ap_config:getInfo()};
    
});

RPC.addHandler('uart_enable', function(args) {
  
    addUARTHandler(9600,10000);
    return {res:"UART0 Enabled ! Clearing after 10s"};
    
});

RPC.addHandler('tds', function(args) {
  
    return {tds:tds_count};
    
});
    
   
    
RPC.addHandler('adc', function(args) {
  
    return readADC();
    
});
    
RPC.addHandler('read_water_flow', function(args) {
  
    return {res:"Serial Data Buffer Val !",rxd:rxAcc};
    
});
    


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

/*************************MAIN*******************************************/

print("START");

addIntrHandler(TDS_PIN);



