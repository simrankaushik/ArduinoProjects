/*thisis the example of serial data reception 
  arduino will receive data serially and will use the serial byte received for 
  controlling an on board LED
  if 'A' is recevied serially then LED will be turned ON , acknowledgement
  will be sent back "LED is ON"
  if 'B' then will OFF with message  
 */
 char temp;//variable to receive the serial data byte
 int myLed = 13;// myLed refers to digital pin 13 of Arduino
 void setup() {
  Serial.begin(9600);
  pinMode(myLed,OUTPUT);
}

void loop() {
  while(!Serial.available());//stay here in the case serial data is not recevied
  if(Serial.available()>0)
  {
    temp = Serial.read();//read the data byte received and store in varible temp
    if(temp=='A')
    {
      digitalWrite(myLed,HIGH);
      Serial.println("LED is ONN");
    }
    if(temp=='B')
    {
      digitalWrite(myLed,LOW);
      Serial.println("LED is OFF");
    }
  }
}
