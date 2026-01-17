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
**Function Details**
&emsp;&emsp;&emsp; ◈  Traffic light functions control LEDs used for the traffic lights
&emsp;&emsp;&emsp; ◈  Pedestrian crossing functions control RGB LEDs used for the pedestrian crossing lights
&emsp;&emsp;&emsp; ◈  street_lights function takes reading from photoresistor and turns street lights on/off accordingly
<br>
<br>
**Pins**<br>
&emsp;&emsp;&emsp; ◈  2,4,7,8,12,13 are used for the Traffic Lights
&emsp;&emsp;&emsp; ◈  3,5,6,9,10,11 are used for Pedestrian Crossings
&emsp;&emsp;&emsp; ◈  A0 is used for photoresistor
&emsp;&emsp;&emsp; ◈  A1 is used for street lights
<br>
<br>
--------------------------------------------------------------------------------------------------------------------------------------------------------------<br>
<br>
**TinkerCad Link**<br>
https://www.tinkercad.com/things/je3YMRBF9o5/editel?returnTo=%2Fdashboard&sharecode=lMZtk5FnuZLV3Y5r7AqB7yYKiBPnMZOOr6BYXoivadE <br>
New <br>
https://www.tinkercad.com/things/fETuWSecu1b/editel?returnTo=%2Fdashboard&sharecode=CzRr7hBM1b7WVoQD0p-FmrAxWNWyP9xzLpIr51u3H3Q <br>
NEW NEW <br>
https://www.tinkercad.com/things/bmuCUyatw2G/editel?returnTo=%2Fdashboard&sharecode=YWGUWs8kigB88xLfP-0MpaSnDle2bllIe3Q_HHTSEtQ <br>
