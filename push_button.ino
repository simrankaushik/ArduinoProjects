void setup() {
  //i will connect push button on pin 2, pin 2 has to be configured as input pin
  pinMode(2,INPUT);
  //you have to initial state of pin 2 as logic HIGH
  digitalWrite(2,HIGH);
  //confegurinh pin 13 as output pin
  pinMode(13,OUTPUT);
  //initial state of pin 13 should be low so that initially LED reamins in OFF state
  digitalWrite(13,LOW);//LED remains in OFF state initially
}

void loop() {
  // we need to monitor the state of pin 2
  if(digitalRead(2)==LOW)
  {
    //it means that the state of pin 2 has been changed and that the push button has been pressed
    //turn on the board LED
    digitalWrite(13,HIGH); // it will turn onn the LED , 13th pin will be made HIGH(5V)
  }
  //else means that the state of the pin 2 is logic HIGH
  else
  {
    // in this condition we have to make sure that the LED is in OFF state
    // this also means that the push button is not pressed by the user
    digitalWrite (13,LOW);//13th pin state remains at low level , LED remains at OFF state
  }
}
