 #define echoPin 5 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 6 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurementchar temp;
//controlling left motor
int op1 = 12;
int op2 = 11;
//controlling right motor
int op3 = 10;
int op4 = 9;
int buzzer=A0;
int temp;
void setup()
{
  Serial.begin(9600);
  pinMode(op1,OUTPUT);
  pinMode(op2,OUTPUT); 
  pinMode(op3,OUTPUT);
  pinMode(op4,OUTPUT);
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
  delay(300);
  digitalWrite(buzzer,HIGH);
delay(300);
digitalWrite(buzzer,LOW);
  delay(300);
  digitalWrite(buzzer,HIGH);
delay(300);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
 
}

void loop()
{

  while(!Serial.available());
  if(Serial.available()>0)
  {
    temp = Serial.read();

   
    if(temp == 'F')//forward,left motor clockwise right anticlockwise
    {
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,HIGH);
    }
    if(temp == 'B')//backward,left motor anticlockwise right motor clockwise
    {
      digitalWrite(op1,LOW);
      digitalWrite(op2,HIGH);
      digitalWrite(op3,HIGH);
      digitalWrite(op4,LOW);
    }
    if(temp == 'R')//right,left clockwise right stop
    {
      digitalWrite(op1,HIGH);
      digitalWrite(op2,LOW);
      digitalWrite(op3,HIGH);
      digitalWrite(op4,LOW);
    }
    if(temp == 'L')//left,left motor stop right anticlockwise
    {
      digitalWrite(op1,LOW);
      digitalWrite(op2,HIGH);
      digitalWrite(op3,LOW);
      digitalWrite(op4,HIGH);
    }
    if(temp == 'S')//stop both
    {
      digitalWrite(op1,LOW);
      digitalWrite(op2,LOW);
      digitalWrite(op3,LOW);
      digitalWrite(op4,LOW);
      digitalWrite(buzzer,HIGH);
    }

if(temp == 'H')//stop both
    {
        digitalWrite(buzzer,LOW);

    }
    
  

  






}





}
