// INITIALIZE VARIBLES
const int lightOnePinOne = 13;
const int lightOnePinTwo = 12; 
const int lightOnePinThree = 8;
const int lightTwoPinOne = 13;
const int lightTwoPinTwo = 12;
const int lightTwoPinThree = 8;
// one set of lights
const int lightThreePinOne = 7; 
const int lightThreePinTwo = 6;
const int lightThreePinThree = 5;
const int lightFourPinOne = 4; 
const int lightFourPinTwo = 3;
const int lightFourPinThree = 2;
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
  pinMode(1, OUTPUT);
  
  // Disable all LED's
  digitalWrite(lightOnePinOne, LOW);
  digitalWrite(lightOnePinTwo, LOW);
  digitalWrite(lightOnePinThree, LOW);
  digitalWrite(lightTwoPinOne, LOW);
  digitalWrite(lightTwoPinTwo, LOW);
  digitalWrite(lightTwoPinThree, LOW);
  digitalWrite(lightThreePinOne, LOW);
  digitalWrite(lightThreePinTwo, LOW);
  digitalWrite(lightThreePinThree, LOW);
  digitalWrite(lightFourPinOne, LOW);
  digitalWrite(lightFourPinTwo, LOW);
  digitalWrite(lightFourPinThree, LOW);
  Serial.begin(9600);
}

void loop() {
// Pin ONE on all is Green
// Pin TWO on all is Yellow
// Pin THREE on all is Red

// Traffic Light Cycle -------------------------------------------------------

photoresistorVal = analogRead(A0);
Serial.println(photoresistorVal);

if (photoresistorVal < 500){
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(1, LOW);
  }

delay(100);

// Turn opposite lights RED to start the cycle
digitalWrite(lightThreePinThree, HIGH);
digitalWrite(lightFourPinThree, HIGH);

// Start cycle - Green lights
digitalWrite(lightOnePinOne, HIGH);
digitalWrite(lightTwoPinOne, HIGH);
delay(5000);
// Turn lights yellow
digitalWrite(lightOnePinOne, LOW);
digitalWrite(lightTwoPinOne, LOW);

digitalWrite(lightOnePinTwo, HIGH);
digitalWrite(lightTwoPinTwo, HIGH);
delay(2500);
// Red light
digitalWrite(lightOnePinTwo, LOW);
digitalWrite(lightTwoPinTwo, LOW);

digitalWrite(lightOnePinThree, HIGH);
digitalWrite(lightTwoPinThree, HIGH);

delay(1500);

// Start cycle - Green lights (Opposite Lights)
digitalWrite(lightThreePinOne, HIGH);
digitalWrite(lightFourPinOne, HIGH);
delay(5000);
// Turn lights yellow
digitalWrite(lightThreePinOne, LOW);
digitalWrite(lightFourPinOne, LOW);

digitalWrite(lightThreePinTwo, HIGH);
digitalWrite(lightFourPinTwo, HIGH);
delay(2500);
// Red light
digitalWrite(lightThreePinTwo, LOW);
digitalWrite(lightFourPinTwo, LOW);

digitalWrite(lightThreePinThree, HIGH);
digitalWrite(lightFourPinThree, HIGH);
delay(1500);
}

// TODO - EKANSH: CHANGE ALL FUNCTION VARIABLES TO THE PINS NEEDED FOR THE RGB LEDS

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
