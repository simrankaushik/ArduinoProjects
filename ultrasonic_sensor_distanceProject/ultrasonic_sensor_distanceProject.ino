float duration; // pulse time variable
float distance; // variable for storing distance
int buzzer=12;
void setup()
{
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
  pinMode(9,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void loop()
{
  
  // apply a 10 microsecond pulse on trigger pin
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);
  
  // measure the pulse width
  
  duration = pulseIn(9,HIGH);
  
  // do the calibration here
  
  distance = duration/58.6;
  
  Serial.println(distance);
  if(distance<30)
  {
    digitalWrite(13,HIGH);
    tone(buzzer,300,100);
  }
  else{
    digitalWrite(13,LOW);
  }
    
  delay(1000);
  
}
