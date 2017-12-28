# README #

Notes on Mongoose OS APIs

#### WIFI ####

Do not configure WiFi means leave the module in AP (Access Point mode).

Mongoose OS starts a WiFi network called Mongoose_XXXXXX with password Mongoose.

mod_http_call.js : Includes samples to make a HTTP POST call 

mod_file_rw.js : Includes samples for the file handling 

mod_1st_init.js : Includes methods to 

#### init Config Schema ####

inside mos.yml 


config_schema:
 - ["def_s", "o", {title: "Default Setting Set"}]  
 - ["def_s.dev", "o", {title: "Default Setting Set"}]
 - ["def_s.ap", "o", {title: "Default Setting for Access Point"}]
 - ["def_s.dev.udid","s","0000000000000000",{title: "Uninitialized UDID"}]
 - ["def_s.ap.ssid","s","DEF_SSID",{title: "Default SSID"}]
 - ["def_s.ap.passwd","s","DEF_PASS",{title: "Default PASSWD"}]


