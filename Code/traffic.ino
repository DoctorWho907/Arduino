// INITIALIZE VARIBLES
//Traffic Lights
//Set 1 of lights
const int lightSet1Red = 13;
const int lightSet1Yellow = 12; 
const int lightSet1Green = 8;
//Set 2 of traffic lights
const int lightSet2Red = 7; 
const int lightSet2Yellow = 4;
const int lightSet2Green = 2;

//Pedestrian Crossings
//Set 1 of crossings
const int crossingSet1Green = 5;
const int crossingSet1Blue = 6;
const int crossingSet1Red = 3;
//Set 2 of crossings
const int crossingSet2Green = 10;
const int crossingSet2Blue = 11;
const int crossingSet2Red = 9;
//Misc
int photoresistorVal = 0;

void setup() {
  // Traffic Light Set 1
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  // Ends
  // Pedestrian Set 2
  pinMode(crossingSet2Blue, OUTPUT);
  pinMode(crossingSet2Green, OUTPUT);
  pinMode(crossingSet2Red, OUTPUT);
  // Ends
  // Pedestrian Set 1
  pinMode(crossingSet1Blue, OUTPUT);
  pinMode(crossingSet1Green, OUTPUT);
  pinMode(crossingSet1Red, OUTPUT);
  // Ends
  // Traffic Light Set 2
  pinMode(lightSet2Red, OUTPUT);
  pinMode(lightSet2Yellow, OUTPUT);
  pinMode(lightSet2Green, OUTPUT);
  // Ends
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
street_lights();
red_one();
red_two();
delay(100);
street_lights();

//set 2 red and set 1 Yellow
gr();
yellow_one();
red_two();
delay(2500);

//set 1 green
street_lights();
gr();
green_one();
delay(5000);
street_lights();

// set 1 yelllow
yr();
flashing_one();
street_lights();

//set 1 red and set 2 yellow
rg();
red_one();
yellow_two();
delay(2500);
street_lights();

// set 2 green
rg();
green_two();
delay(5000);
street_lights();

// set 2 yellow
ry();
flashing_two();
street_lights();
}

void street_lights(){
photoresistorVal = analogRead(A0);
Serial.print(photoresistorVal);
if (photoresistorVal>500){
digitalWrite(A1, HIGH);
}
else{
digitalWrite(A1,LOW);
}
}

//Colours for set 1
void green_one () {
  //set the LED pins to values that make green
  analogWrite(crossingSet1Red, 0);
  analogWrite(crossingSet1Green, 100);
  analogWrite(crossingSet1Blue, 0);
}

void yellow_one () {
  //set the LED pins to values that make yellow
  analogWrite(crossingSet1Red, 100);
  analogWrite(crossingSet1Green, 100);
  analogWrite(crossingSet1Blue, 0);
}

void red_one () {
  //set the LED pins to values that make red
    analogWrite(crossingSet1Red, 100);
  analogWrite(crossingSet1Green, 0);
  analogWrite(crossingSet1Blue, 0);
}

void white_one () {
  //set the LED pins to values that make white
  analogWrite(crossingSet1Red, 100);
  analogWrite(crossingSet1Green, 100);
  analogWrite(crossingSet1Blue, 100);
}

void flashing_one() {
  float start_time = millis();
  const float duration = 3500;
  while (millis() - start_time <= duration) {
  red_one();
  delay(200);
  off_one();
  delay(200);
  }
}

void off_one () {
  analogWrite(crossingSet1Red, 0);
  analogWrite(crossingSet1Green, 0);
  analogWrite(crossingSet1Blue, 0);
}
//Colours for set 2
void green_two () {
  //set the LED pins to values that make green
  analogWrite(crossingSet2Red, 0);
  analogWrite(crossingSet2Green, 100);
  analogWrite(crossingSet2Blue, 0);
}

void yellow_two () {
  //set the LED pins to values that make yellow
  analogWrite(crossingSet2Red, 100);
  analogWrite(crossingSet2Green, 100);
  analogWrite(crossingSet2Blue, 0);
}

void red_two () {
  //set the LED pins to values that make red
  analogWrite(crossingSet2Red, 100);
  analogWrite(crossingSet2Green, 0);
  analogWrite(crossingSet2Blue, 0);
}

void flashing_two() {
  float start_time = millis();
  const float duration = 3500;
  while (millis() - start_time <= duration) {
    red_two();
    delay(200);
    off_two();
    delay(200);
  }
}
void white_two () {
  //set the LED pins to values that make white
  analogWrite(crossingSet2Red,100);
  analogWrite(crossingSet2Green, 100);
  analogWrite(crossingSet2Blue, 100);
}

void off_two() {
  analogWrite(crossingSet2Red, 0);
  analogWrite(crossingSet2Green, 0);
  analogWrite(crossingSet2Blue, 0);
}

//lights
void yr(){
digitalWrite(lightSet2Yellow, LOW);
digitalWrite(lightSet2Green, LOW);
digitalWrite(lightSet1Red, LOW);
digitalWrite(lightSet2Red, HIGH);
digitalWrite(lightSet1Yellow, HIGH);
digitalWrite(lightSet1Green, LOW);
}

void gr(){
digitalWrite(lightSet2Yellow, LOW);
digitalWrite(lightSet2Green, LOW);
digitalWrite(lightSet1Red, LOW);
digitalWrite(lightSet2Red, HIGH);
digitalWrite(lightSet1Yellow, LOW);
digitalWrite(lightSet1Green, HIGH);
}

void ry(){
digitalWrite(lightSet2Yellow, HIGH);
digitalWrite(lightSet2Green, LOW);
digitalWrite(lightSet1Red, HIGH);
digitalWrite(lightSet2Red, LOW);
digitalWrite(lightSet1Yellow, LOW);
digitalWrite(lightSet1Green, LOW);
}

void rg(){
digitalWrite(lightSet2Yellow, LOW);
digitalWrite(lightSet2Green, HIGH);
digitalWrite(lightSet1Red, HIGH);
digitalWrite(lightSet2Red, LOW);
digitalWrite(lightSet1Yellow, LOW);
digitalWrite(lightSet1Green, LOW);
}
