<h1>Flash my firmware</h1>

1. Go to my [open source branch](https://github.com/Raydivine/IoT-of-Modern-Agriculture/tree/openSource) , and download the repo by clicking "clone or download" -> "download zip"
<hr/>
2. Extract the zip file, inside the folder, click "IoT_Agriculture" to open my firmware

   <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Arduino/project%20file.PNG" />
<hr/>
3. Replace your channel ID, write api key and read api key into my code, 
   
   <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Arduino/Replace%20id%20and%20key.PNG"/>
   
   Click compile and then upload button (top left) to upload the firmware to your board,
  
   <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Arduino/compile%20and%20upload.PNG" />
<hr/>
4. After uploaded, open the serial port monitor ( top right).
   <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Arduino/serial%20monitor.PNG"/>
   
   Set the baudrate to 115200, and 'BOTH NL & CR' 
   <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Arduino/Print%20out%20message.PNG"/>
   
   The message above is printed by my firmware code, every time the board start up, it will scan the target WiFi's SSID first, then only    connect it. This feature is implemented for troubleshoot purpose, if the target SSID cannot be connected, the case can be
   a. The SSID is not available
   b. The distance is too long
   c. The password is wrong
   d. The SSID its self doesn't has internet connectivity
   e. The board's WiFi is not working
   
   By scanning the available WiFi's at beginning can let us identify the situation, if the target SSID is scanned but not connected then    we can known it is belong to case'c' or 'd'. You can remove the WiFi's scan feature if you don't expect to do any troubleshooting.
   
   So, if you board is working, then you are able to see a complete 1 cycle message as shown above. 
   (Ignore brightness control message, I did not implement it in openSource branch)
   
   If you did not see it, you may try another framework version, or [fully erase](http://www.pratikpanda.com/completely-format-erase-      esp8266-flash-memory/) your board
   <i>(take note nodeMCU refer to esp8266-12E, is 4M memory device please erase with the instruction said)</i>
   
   After 1 cycle is run, you should be able to see the data updated in your thingSpeak channel, please do remember test your board with    reset and power off to ensure it is working consistency.
