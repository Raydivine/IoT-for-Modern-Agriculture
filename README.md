<h1>IoT-of-Modern-Agriculture</h1>

<h2>A nodeMCU firmware for IoT of agriculture application</h2>
<i>   This is an environment monitoring project by using IoT technology, the monitoring object are temperature, humidity, brightness and rain density. This project is build for investigating how does IoT(Internet of Things) apply in modern agriculture, so it is named as its intend.</i>
<hr/>

<h3>Overview</h3>

 <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Agriculture/self%20farming.jpg" width="45%" height="250px" />  <img src="https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Image/Agriculture/farm%20monitor.jpg" width="45%" height="45%" />

   If you are doing self farming, and you would like to monitor your farm by using IoT technology, this firmware is implemented for collecting environmenet data of temperature, humidity, brightness and rain density, then upload to the server ((ThingSpeak)[https://thingspeak.com/] ) for monitor and action purpose. 
 
   For using this project, you have to a register ThingSpeak account and prepare the resources. The procedure is listed below, by doing it you can monitor your farm environment anywhere 
 
 The monitoring data is not sufficient I will explain how to use and improve it, you are welcome to take my firmware but it is not sufficient for industry purpose.  

<h3>Introduction</h3>
1. [IoT ( Internet of things)](https://en.wikipedia.org/wiki/Internet_of_things)
2. [How does IoT involved in modern agriculture ](https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Modern%20Agriculture.md)

<h3>Resources and Server</h3>
1. The [Components](https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Component.md) are used in this project in-      order to collect environment data the upload to server.
2. This [Server](https://thingspeak.com) is used for monitor , analysis and action.
<h3>Server</h3>
Using ThingSpeak as data monitoring , analysis and task server <br/>

<h3>My server</h3>
a. [Monitor](https://thingspeak.com/channels/169688) channel is for collecting data and visualize them in graph form <br/>
b. [Analysis](https://thingspeak.com/channels/171094) channel is for investigate the data characteristics , apply with modern knowledge to calculate&get new data.<br/>
c. [Task](https://thingspeak.com/channels/171780) channel is for controlling purpose, the WiFi module will upload the on-time data to server, then server will do control adjust and write the instruction to this channel, finally the WiFi module will read the instruction from this channel and then perform the action. 


<h3>Content</h3>


4. [Build your device](https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Build%20your%20device.md)
5. [Setup your server](https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Register%20ThingSpeak.md)
6. [Setup your Arduino](https://github.com/Raydivine/NodeMCU-with-IoT-practice/blob/master/Tutorial/NodeMCU%20Arduino%20Setting.md)
7. [Flash my firmware](https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/Doc/Flash%20my%20firmware.md)

<h3>Regard</h3>
This project is welcome anyone to copy, modify and publish.<br/>
See the [LICENSE](https://github.com/Raydivine/IoT-of-Modern-Agriculture/blob/master/LICENSE) file for license rights and limitations (MIT).
<hr/>
<i>For NodeMCU learners who using Arduino, it is good that you look for help in [esp82666's arduino environment developer](https://github.com/esp8266/Arduino) repo, there is larger number of member which can answer your question rapidly. For me, you are welcome to ask any question by create an issue (I will answer you as I get my email reminded). If you are using LUA please go to [ESP8266 Community Forum](http://www.esp8266.com/index.php?sid=7377269ab4c35f67c420ac8a88e5aeb3)</i> to look for help.
