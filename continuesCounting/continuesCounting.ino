#include<LiquidCrystal.h>//including library for lcd
LiquidCrystal lcd(5,6,7,8,9,10);// defining lcd object of type liquidcrystal and give pin mapping
void setup() 
{
  lcd.begin(16,2);//initialising tha 16x2 lcd display
  lcd.print("Simran Kaushik");//first print
  delay(1000);//after 1 sec
  lcd.clear();//clear the screen
  /*int i ;// defining a variable of integer type
  for(i=0;i<=10;i++)//loop initialisation
  {
   lcd.clear();//after reading 0,clears the screen for next number to be displayed
   lcd.print(i);//print that number 
   delay(1000);//after 1 sec as the loop gets over
   //lcd.clear();
  }
  lcd.clear();// clear the screen
  delay(1000);// after 1 sec
  //lcd.setCursor(0,1)
  int j ;
  for(j=10;j>=0;j--)//start another loop
  {
   lcd.clear();//after 1st reading clear the screen
   lcd.print(j);//print that number
   delay(1000);//after 1 sec of printing the previous number, start the loop again  
  //finishing of loop when reaches 0
  }*/
}
void loop()
{
  int i ;// defining a variable of integer type
  for(i=0;i<=10;i++)//loop initialisation
  {
   lcd.clear();//after reading 0,clears the screen for next number to be displayed
   lcd.print(i);//print that number 
   delay(1000);//after 1 sec as the loop gets over
   //lcd.clear();
  }
  lcd.clear();// clear the screen
  delay(1000);// after 1 sec
  //lcd.setCursor(0,1)
  int j ;
  for(j=10;j>=0;j--)//start another loop
  {
   lcd.clear();//after 1st reading clear the screen
   lcd.print(j);//print that number
   delay(1000);//after 1 sec of printing the previous number, start the loop again  
  //finishing of loop when reaches 0
  }
}
