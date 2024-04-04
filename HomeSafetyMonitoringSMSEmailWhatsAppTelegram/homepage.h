// To create literal strings stored in flash memory enclose your HTML code between 
// F(R"=====( HTML code here )=====");
// If you have 1 reading then you probably have 2 literal strings
// If you have 2 readings then you probably have 3 literal strings etc.

String homePagePart1 = F(R"=====(<!DOCTYPE html>
<html lang="en" > <!-- Needed for Screenreaders !-->
<head>
<!-- UTF-8 character set covers most characters in the world -->
  <meta charset="utf-8">
  <!-- Make page respond to screen size !-->
  <meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">
 
<!--Include a Title. Used by Search Engines -->
<title> Real-Time Health Monitoring and Emergency Alert System </title>
<link rel="icon" type="image/x-icon" href="C:\Users\mypc\OneDrive - Atlantic TU\2nd year\IoT\HomeSafetyMonitoringSMSEmailWhatsAppTelegram\logo.jpg">

<style>
   
   <!--choose good contrast between background and foreground colours -->
   body {       
	background-color: DodgerBlue;
	}
	.flex-Container{
        display: flex;
        flex-direction: column;
        background-color:lightpink;
      
      
      }
   
      .row{
        background-color: lightpink;
        display: flex;
        flex-direction: row;
        justify-content: space-between;
        margin-top: 20px;
       
      }
      .part2{
        display: flex;
        flex-direction: column;
      }
    .graph-section1,.graph-section2{
   
        flex-direction: column;
        margin:5px;
    }
    .part1, .part2{
        flex:1;
    }
   .center{
    text-align: center;
   }
    h1{
    display: flex;
    font: bold;
    font-size: 40px;
    font-family: Arial;
    color: navy;
	text-align: center;
  }
  
  p{
    font-size: 25px;
    font-family: Arial;
    color: navy;
	text-align: center;
   }  
  th, td {
    font-size: 25px;
    padding: 8px;
    text-align: left;
    border-top: 1px solid navy;
    border-bottom: 1px solid navy;
    border-left:1px solid navy ;
    color: navy;
}
</style>

</head>
	<body>
		<div class="flex-Container">
		<h1> <img src="C:\Users\mypc\OneDrive - Atlantic TU\2nd year\IoT\HomeSafetyMonitoringSMSEmailWhatsAppTelegram\logo.jpg" width="200" height="200">Real-Time Health Monitoring and Emergency Alert System </h1>
      
		<p><u>The following is the health status of a patient A</u></p>
        <div class="row">
     
            <div class="part1">
                <p><u>thingspeak graphs</u></p>
                <div class ="graph-section1">
                    <iframe width="250" height="200" style="border: 1px solid #cccccc;" src="https://thingspeak.com/channels/2412150/charts/1?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&type=line&update=15"></iframe>
                    <iframe width="250" height="200" style="border: 1px solid #cccccc;" src="https://thingspeak.com/channels/2412150/charts/2?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&type=line&update=15"></iframe>
                </div>
                <div class ="graph-section2">
                    <iframe width="250" height="200" style="border: 1px solid #cccccc;" src="https://thingspeak.com/channels/2412150/charts/3?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&type=line&update=15"></iframe>
                    <iframe width="250" height="200" style="border: 1px solid #cccccc;" src="https://thingspeak.com/channels/2412150/charts/4?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&type=line&update=15"></iframe>
                </div>
            </div>
            <div class="part2">
              <p><u>Live video of the patient</u></p>
              <iframe width="500" height="205" src="http://192.168.8.126/" frameborder="0" allowfullscreen></iframe>
              <p><u>Live location of the patient</u></p>
              <iframe width="500" height="125" src="xxx" frameborder="0" allowfullscreen></iframe>
            </div>
         </div>
         <br>
         <p class="center">Sensor table </p>
		<table>
        <tr>
          <th>Sensor</th>
          <th>Value</th>
          <th>Unit</th>
        </tr>
        <tr>
          <td>Temperature</td>
          <td> )=====");
String homePagePart2 = F(R"=====(</td>
         <td>Degree Celsius</td>
        </tr>
        <tr>
        <td>Humidity</td>
        <td> )=====");
        String homePagePart3a = F(R"=====(</td>
 <td>%</td>
        </tr>
        <tr>
        <td>Oxygen levels</td>
        <td> )=====");
String homePagePart3 = F(R"=====(</td>
 <td>%</td>
        </tr>
        <tr>
        <td>Heartrate</td>
        <td> )=====");
String homePagePart4 = F(R"=====(</td>
        <td>bpm / SpO2</td>
        </tr>
        <tr>
        <td>Patients' message:</td>
        <td> )=====");
String homePagePart5= F(R"=====(</td>
<tr>
<td>fall detection:</td>
 <td> )=====");
String homePagePart6= F(R"=====(</td>
        <td></td>
        </tr>
      </table>
 
</div>
	</body>
</html>
	
		)=====");