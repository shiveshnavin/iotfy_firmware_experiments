### README ###

Notes on Mongoose OS APIs

## WIFI ##

Do not configure WiFi means leave the module in AP (Access Point mode).

Mongoose OS starts a WiFi network called Mongoose_XXXXXX with password Mongoose.

mod_http_call.js : Includes samples to make a HTTP POST call 

mod_file_rw.js : Includes samples for the file handling 

mod_1st_init.js : Includes methods to 

## init Config Schema ##

inside mos.yml 


config_schema:
 - ["def_s", "o", {title: "Default Setting Set"}]  
 - ["def_s.dev", "s", "", {"udid": "0000000000000000"}]
 - ["def_s.ap", "s", "", {"ssid": "0000000000000000","passwd": "0000000000000000"}]


