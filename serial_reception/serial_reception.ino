//this is an example of serial data reception
//in this laptop is sending data to arduino via USB ports
//arduino will receive data serially and we will use serial data byte receiver
//for controlling to on board LED
//if 'A' is received serially then LED will be turned ON
//if 'B' than OFF

char temp;
int myLed = 13;// it refers to the 13th pin of Arduino
void setup() {
  //intialize serial communicationat 9600 bps baud rate
  Serial.begin(9600);
  //configure 13th pin as the output pin
  pinMode(myLed,OUTPUT);
}

void loop() {
  while(!Serial.available());//stay here in case no data is received
  if(Serial.available()>0)
  {
    temp = Serial.read();//reads the data byte received and store in variable temp
    if(temp=='A')
    {
      digitalWrite(myLed,HIGH);
    }
    if(temp=='B')
    {
      digitalWrite(myLed,LOW);
    }
  }
}
