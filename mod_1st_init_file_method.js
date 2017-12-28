load("api_file.js");
load('api_sys.js'); 
load("api_http.js");
load('api_config.js');



let init_def=function(){


	let file_exists=0;

	let cont=File.read('settings.json');
	if(cont!="")
	{
		file_exists=1;
	}

	if(file_exists==0)
	{

			let http_url="http://127.0.0.1/index.php";

			HTTP.query({
			  url: http_url,
			  headers: { 'X-q': 'query' },     // Optional - headers
			  data: {ram: Sys.free_ram(), q: 'Mongoose OS'},      // Optional. If set, JSON-encoded and POST-ed
			  success: function(body, full_http_msg) { 


			  		print(body);
			  		let cfg=JSON.parse(body);
			  		File.write(JSON.stringify(cfg, 'settings.json'));
			  		init_def();


			  },
			  error: function(err) { print(err); },  // Optional
			});

	}

	let config = JSON.parse(File.read('settings.json'));

};