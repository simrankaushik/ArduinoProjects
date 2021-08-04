#include<LiquidCrystal.h>
LiquidCrystal lcd(5,6,7,8,9,10);
void setup() 
{
  lcd.begin(16,2);
  lcd.print("Simran Kaushik");
  delay(1000);
  lcd.clear();
  //cd.setCursor(0,0);
  lcd.print("faridabad");
  delay(1000);
  lcd.clear();
  //lcd.setCursor(0,0);
  lcd.print("india");
  delay(1000);
  lcd.clear();
}

void loop()
{
 
}
