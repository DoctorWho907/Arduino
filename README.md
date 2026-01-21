**Defintions:** <br>
<br>
**Formatting of Variable Names** <br>
&emsp;&emsp;&emsp;	**Traffic Lights** <br>
&emsp;&emsp;&emsp;	◈  Variable are structured so that the variable for the traffic lights are in 2 sets so 6 pins are used for them <br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;		❖ If they were not merged We would have to use 12 pins total for 4 stes compared  to two sets <br>
&emsp;&emsp;&emsp;	◈  trafficLightSet[x]Green --> The green Led for 1 set of traffic lights for same direction <br>
&emsp;&emsp;&emsp;	◈  trafficLightSet[x]Yellow --> The yellow Led for 1 set of traffic lights for same direction <br>
&emsp;&emsp;&emsp;	◈  trafficLightSet[x]Red --> The red Led for 1 set of traffic lights for same direction <br>
<br>	
&emsp;&emsp;&emsp;	**Pedestrian Crossings** <br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; ◈ crossingSet[x]Green --> Green Pin for RGB LEDs Going in same direction as trafficLightSet[x]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; ◈ crossingSet[x]Blue --> Blue Pin for RGB LEDs Going in same direction as trafficLightSet[x]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; ◈ crossingSet[x]Red --> Red Pin for RGB LEDs Going in same direction as trafficLightSet[x]<br>
&emsp;&emsp;&emsp;	**Other** <br>
&emsp;&emsp;&emsp;	◈  photoresistorVal --> used to store the current value the photoresistor is giving <br>
<br>
<br>
**Formatting Of Function Names**<br>
&emsp;&emsp;&emsp; **Traffic Lights**<br>
&emsp;&emsp;&emsp; ◈  Functions for the Traffic Lights are formatted as ab<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; ◈  Where a is the first letter of the colour of traffic light set 1<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; ◈  Where b is the first letter of the colour of traffic light set 2<br>
<br>
&emsp;&emsp;&emsp; ◈  **Pedestrian Crossing**<br>
&emsp;&emsp;&emsp; ◈  Functions for the Pedestrian Crossing are formatted as [rgb setting(Red,Green,Blue,White,Off)]_[light set number(one,two)]<br>
<br>
<br>
**Function Details**<br>
&emsp;&emsp;&emsp; ◈  Traffic light functions control LEDs used for the traffic lights<br>
&emsp;&emsp;&emsp; ◈  Pedestrian crossing functions control RGB LEDs used for the pedestrian crossing lights<br>
&emsp;&emsp;&emsp; ◈  street_lights function takes reading from photoresistor and turns street lights on/off accordingly<br>
<br>
<br>
**Pins**<br>
&emsp;&emsp;&emsp; ◈  2,4,7,8,12,13 are used for the Traffic Lights<br>
&emsp;&emsp;&emsp; ◈  3,5,6,9,10,11 are used for Pedestrian Crossings<br>
&emsp;&emsp;&emsp; ◈  A0 is used for photoresistor<br>
&emsp;&emsp;&emsp; ◈  A1 is used for street lights<br>
<br>
<br>
--------------------------------------------------------------------------------------------------------------------------------------------------------------<br>
<br>
TinkerCad Link<br>
https://www.tinkercad.com/things/bmuCUyatw2G/editel?returnTo=%2Fdashboard&sharecode=YWGUWs8kigB88xLfP-0MpaSnDle2bllIe3Q_HHTSEtQ <br>

<br>
Canva Link<br>
https://www.canva.com/design/DAG9qb2ZqQc/QB-9GJbamba1-MdPYIznzw/edit?utm_content=DAG9qb2ZqQc&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton

<br>
Video Link<br>
https://drive.google.com/file/d/1TxuEZHElCryrzH8KS_vCFNZrKkJv8mQq/view?usp=sharing
