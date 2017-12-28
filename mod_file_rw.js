load("api_file.js");
load('api_sys.js'); 

/*

File.write(str, name, mode)

str : File contents to be written
name: File Name
mode: a - append
	  w - Replace 

*/

var obj={

	dev_id : 11222
	url : "http://127.0.0.1/index.php?q=1"
	resp: "1"
	free_ram : Sys.free_ram()
};

File.write(JSON.stringify(obj, 'settings.json'));


/*

File.read(name)
 
name: File Name 

Return value: a string contents of the file. If file does not exist, an empty string is returned.

*/


let obj = JSON.parse(File.read('settings.json'));

/*

Check if File exists

*/


var file_exists=0;

var cont=File.read('settings.json');
if(cont!="")
{
	file_exists=1;
}