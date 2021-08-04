/*
   6 x 2 LCD interfacing with arduino
   rs-12th pin, en-11th pin
   db4 to db7 are connected to pin7 to pin 10
*/
 //it is the dots we connect like matrix
// include the library of lcd
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,9,8,7);//define lcd object of type LiquidCrystal and give pin mapping
void setup() {
 // initailize the 16x2 lcd
 lcd.begin(16,2); 
 lcd.print("SIMRAN");// print this message
 lcd.setCursor(0,1);// cursor of initial position line 2 
 lcd.print("INDIA");
}

void loop() {}
