load("api_file.js");
load('api_sys.js'); 
load("api_http.js");
load('api_config.js');



let init_def=function(){


	
	let dev=JSON.parse(Cfg.get('def_s.dev')); // returns def_s.devid

	if(devid.udid==0000000000000000)
	{

			let http_url="http://127.0.0.1/index.php";

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

	}


	init_cfg():

};


let save_cfg=function(cfg) {
	
	 
	print("New Configuration Updated !");

}


let init_cfg=function() {
	

		/*
			Create AP here
		*/
 


	print("New Configuration Loaded !");

}