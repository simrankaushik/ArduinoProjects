float distance;
float duration;
int trigger = 10;
int echo = 9;
int led = 13;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration/58.6;
  Serial.println(distance);
  if (distance < 30)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(100);
}
