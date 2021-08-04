/*
  this application is the demonstration of serial data communication between
  the arduino and a laptop
 */

void setup() {
  Serial.begin(9600);//this statement will intialize serial communication 9600 bps
  //baud rate is commonly referred to as speed of data communication unit is bps
  //number of signal changes per sec in mcu bit rate and baud rate are considered same
}

void loop() {
  Serial.println("HELLO EVERYONE");//print this string msg on serial port
  delay(1000);//delay of 1 sec
}
