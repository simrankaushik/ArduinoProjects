//#include<SoftwareSerial.h>//as we will make use of the SOFTWARE SERIAL PORT of connect
//SoftwareSerial mySerial(6,7);//RX is at 6 and TX is at 7
char temp;//variable to store the data received by bluetooth

void setup()
{
  Serial.begin(9600);//initailizing software serial at 9600 bps
  pinMode(2,OUTPUT);//relay1
  pinMode(3,OUTPUT);//relay2
  pinMode(4,OUTPUT);//relay3
  pinMode(5,OUTPUT);//relay4
  //INITIALLY HIGH as it 0 at high
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}

void loop()
{
  while(!Serial.available());//wait here until data is received
  if (Serial.available()>0)//if data is received
  {
    temp = Serial.read();//read the data byte and store it in variable 'temp'
    //if A is received
    if(temp == 'A')
    {
      //make onboard led glow
      digitalWrite(2,HIGH);
    }
    
    //if B received 
    if(temp == 'B')
    {
      digitalWrite(2,LOW);//turn off the onboard led
    }
    /////////////////////2nd relay//////////////
    if(temp == 'C')
    {
      digitalWrite(3,HIGH);//signal given
    }
    if(temp == 'D')
    {
      digitalWrite(3,LOW);//signal OFF
    }
    ///////////3rd relay///////////////
    if(temp == 'E')
    {
      digitalWrite(4,HIGH);//signal given
    }
    if(temp == 'F')
    {
      digitalWrite(4,LOW);//signal OFF
    }
    ////////////////////4th relay///////////////////////
    if(temp == 'G')
    {
      digitalWrite(5,HIGH);//signal given
    }
    if(temp == 'H')
    {
      digitalWrite(5,LOW);//signal OFF
    }
    if(temp == 'I')//all glow
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
    }
    if(temp == 'J')//all off
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW  );
    }
  }
}
