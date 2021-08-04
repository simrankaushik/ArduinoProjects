  int buz1=2;
  int buz2=3;
  int buz3=4;
  int buz4=5;
  int buz5=6;
  int buz6=7;
  int buz7=8;
  int buz8=9;
  
  int buzzer=13;
  void setup() 
{
  pinMode(buz1,INPUT);
  pinMode(buz2,INPUT);
  pinMode(buz3,INPUT);
  pinMode(buz4,INPUT);
  pinMode(buz5,INPUT);
  pinMode(buz6,INPUT);
  pinMode(buz7,INPUT);
  pinMode(buz8,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  int b1=digitalRead(buz1);
  int b2=digitalRead(buz2);
  int b3=digitalRead(buz3);
  int b4=digitalRead(buz4);
  int b5=digitalRead(buz5);
  int b6=digitalRead(buz6);
  int b7=digitalRead(buz7);
  int b8=digitalRead(buz8);
  if(b1==1)
  {
    tone(buzzer,300,100);
  }
   if(b2==1)
  {
    tone(buzzer,400,100);
  }
   if(b3==1)
  {
    tone(buzzer,500,100);
  }
   if(b4==1)
  {
    tone(buzzer,600,100);
  }
   if(b5==1)
  {
    tone(buzzer,700,100);
  }
   if(b6==1)
  {
    tone(buzzer,800,100);
  }
   if(b7==1)
  {
    tone(buzzer,900,100);
  }
   if(b8==1)
  {
    tone(buzzer,1000,100);
  }
    
}
