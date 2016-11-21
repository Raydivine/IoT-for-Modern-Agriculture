<h1>Solve WiFi issue</h1>
For ESP8266 Arduino framework 2.3.0, there is an [issue](https://github.com/esp8266/Arduino/issues/2265) which WiFi is not working.
<br/>
(I tried their suggested solution but couldn't get it solve, so I am using 2.0.0 .
<br/>

I would recommend you try the lastest version, for test is the WiFI working, please upload the example skectch 
<br/>
from 'File->Examples->ESP8266WIFI->WIFISCAN' to your board, 
<br/>
then open the port terminal to observe the print out message, if there is SSID scanned then means the WiFI is working.
<br/>

Wheter is work or not, reset and power cycle your board to test the status.
<br/>

If is not working, you may downgrade the framework by remove the current version first,
if you don't remove it I believe the versions may mix together, 
or it is better you that clear the package manually in its directory
'C:\Users[username]\AppData\Roaming\Arduino15\packages\esp8266\hardware' before install the new one
<br/>

If you successful make the WiFI working, please do remember test with reset and power cycle to ensure it is working consistency.
<br/>
