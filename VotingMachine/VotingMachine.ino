#include<LiquidCrystal.h>// including the lcd library
LiquidCrystal lcd(8, 7, 9, 10, 11, 12);// initializing the pins 
// pin 8 - rs //  
int a; int b; int c; int d;

void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  lcd.begin(16,2);//initialising tha 16x2 lcd display
  lcd.print("Voting Machine");//first print
  delay(1000);//after 1 sec
  lcd.clear();//clear the screen
}

void loop() {
  //int a=0; int b=0; int c=0;
  if (digitalRead(2)==LOW)
  {
    a=a+1;
    lcd.setCursor(0,0);
    lcd.print("THANKS");
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("Vote Recorded");
    delay(1000);
    lcd.clear();
  }
  
  if (digitalRead(3)==LOW)
  {
    b=b+1;
    lcd.setCursor(0,0);
    lcd.print("THANKS");
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("Vote Recorded");
    delay(1000);
    lcd.clear();
  }
  if (digitalRead(4)==LOW)
  {
     c=a+b;//total votes
     lcd.setCursor(0,0);
     lcd.print("Total Votes");
     lcd.setCursor(0,1);
     lcd.print(c);
     delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Party A votes");
     lcd.setCursor(0,1);
     lcd.print(a);
     delay(1000);
     lcd.setCursor(0,0);
     lcd.print("Party B votes");
     lcd.setCursor(0,1);
     lcd.print(b);
     delay(1000);
     lcd.clear();
     //if (b==c)
     //{
       //lcd.print("same votes");
     //}
     if (a>b)
     {
      lcd.print("Party A WONS");
      delay(1000);
      lcd.clear();
      c=a-b;
      lcd.setCursor(0,0);
      lcd.print("Difference:");
      lcd.setCursor(0,1);
      lcd.print(c);
      delay(1000);
      lcd.clear();
     }
     if (b>a)
     {
       lcd.print("Party B WONS");
       delay(1000);
       lcd.clear();
       d=b-a;
       lcd.setCursor(0,0);
       lcd.print("Difference:");
       lcd.setCursor(0,1);
       lcd.print(d);
       delay(1000);
       lcd.clear();
     }
     if (a==b)
      {
        lcd.print("same votes");
        delay(1000);
        lcd.clear();
      }

  }
}
