// INITIALIZE VARIBLES
const int lightSet1Green = 13;
const int lightSet1Yellow = 12; 
const int lightSet1Red = 8;
// one set of lights -- Above
const int lightSet2Green = 7; 
const int lightSet2Yellow = 4;
const int lightSet2Red = 2;
//set 2 of traffic lights -- Above
int photoresistorVal = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, OUTPUT);
  
  // Disable all LED's
  digitalWrite(lightSet1Green, LOW);
  digitalWrite(lightSet1Yellow, LOW);
  digitalWrite(lightSet1Red, LOW);
  digitalWrite(lightSet2Green, LOW);
  digitalWrite(lightSet2Yellow, LOW);
  digitalWrite(lightSet2Red, LOW);
  //setup photoresistor
  Serial.begin(9600);
  digitalWrite(A0, HIGH);
}

void loop() {
// Traffic Light Cycle -------------------------------------------------------
read_photoresistor();
street_lights();
delay(100);
read_photoresistor();
street_lights();
// Turn opposite lights RED to start the cycle
digitalWrite(lightSet2Red, HIGH);
// Start cycle - Green lights
digitalWrite(lightSet1Green, HIGH);
delay(5000);
read_photoresistor();
street_lights();
// Turn Green Lights Off
digitalWrite(lightSet2Red, LOW);

// Turn Lights Yellow
digitalWrite(lightSet2Yellow, HIGH);
delay(5000);
read_photoresistor();
street_lights();
//Turn Yellow Lights Off
digitalWrite(lightSet2Yellow, LOW);

//Turn Red Lights On
digitalWrite(lightSet2Green, HIGH);
 
// Turn lights yellow
digitalWrite(lightSet1Green, LOW);

digitalWrite(lightSet1Yellow, HIGH);
delay(2500);
read_photoresistor();
street_lights();
// Red light
digitalWrite(lightSet1Yellow, LOW);

digitalWrite(lightSet1Red, HIGH);

delay(1500);
read_photoresistor();
street_lights();
// Start cycle - Green lights (Opposite Lights)
digitalWrite(lightSet2Green, HIGH);

delay(5000);
read_photoresistor();
street_lights();
// Turn lights yellow
digitalWrite(lightSet2Green, HIGH);
digitalWrite(lightSet1Yellow, HIGH);
digitalWrite(lightSet1Red, LOW);
delay(1500);
read_photoresistor();
street_lights();
digitalWrite(lightSet1Yellow, LOW);
digitalWrite(lightSet1Red, LOW);
digitalWrite(lightSet2Yellow, HIGH);

digitalWrite(lightSet1Green, HIGH);
digitalWrite(lightSet2Green, LOW);
delay(2500);
read_photoresistor();
street_lights();
// Red light
digitalWrite(lightSet2Yellow, LOW);
  
digitalWrite(lightSet2Green, LOW);
}

void read_photoresistor(){
photoresistorVal = analogRead(A0);
Serial.print(photoresistorVal);
}
void street_lights(){
if (photoresistorVal>500){
digitalWrite(A1, HIGH);
}
else{
digitalWrite(A1,LOW);
}
}
// TODO - EKANSH: CHANGE ALL FUNCTION VARIABLES TO THE PINS NEEDED FOR THE RGB LEDS
/*
void green () {
  //set the LED pins to values that make green
  analogWrite(RedPin, 0);
  analogWrite(GreenPin, 100);
  analogWrite(BluePin, 0);
}

void yellow () {
  //set the LED pins to values that make yellow
  analogWrite(RedPin, 100);
  analogWrite(GreenPin, 100);
  analogWrite(BluePin, 0);
}

void red () {
  //set the LED pins to values that make red
  analogWrite(RedPin, 100);
  analogWrite(GreenPin, 0);
  analogWrite(BluePin, 0);
}

void white () {
  //set the LED pins to values that make white
  analogWrite(RedPin, 255);
  analogWrite(GreenPin, 255);
  analogWrite(BluePin, 255);
}

void off () {
  analogWrite(RedPin, 0);
  analogWrite(GreenPin, 0);
  analogWrite(BluePin, 0);
} 
*/

