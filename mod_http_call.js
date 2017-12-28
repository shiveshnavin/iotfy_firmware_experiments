load("api_http.js");
load('api_sys.js');
load('api_timer.js');


//MAKE A HTTP CALL every 5s

Timer.set(5000, true, function() {




	var http_url="http://127.0.0.1/index.php";

	HTTP.query({
	  url: http_url,
	  headers: { 'X-q': 'query' },     // Optional - headers
	  data: {ram: Sys.free_ram(), q: 'Mongoose OS'},      // Optional. If set, JSON-encoded and POST-ed
	  success: function(body, full_http_msg) { print(body); },
	  error: function(err) { print(err); },  // Optional
	});




}, null);

/*

	In order to send HTTPS request, use https://... URL. Note that in that case ca.pem file must contain CA certificate of the requested server.

*/
