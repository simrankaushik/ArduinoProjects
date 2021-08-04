#include<Keyboard.h>
//////new sensor right /////////////
float durationr;   // duration for right sensor
float distancer;   // distance of right sensor
int triggerr = 12 ; // trigger right  
int echor = 11 ;     // echo right   
////////////////////////////////////////////////////////////////////////////
/////////////////old sensor//////////////////
float durationl;// duration left
float distancel;//distance left 
int triggerl =9  ;//trigger left
int echol = 10 ;  //echo left 
int duration;    
///////////////////////////////////////////////////////////////////////////////
/////////distance and duration for function //////////////////////////////////
//int duration;
int distance;
int led = 13; 
void setup()
{
  Serial.begin(9600);// used for cross-checking the distance read by the arduino 
  pinMode(led, OUTPUT);
  pinMode(triggerr, OUTPUT);
  pinMode(echor, INPUT);              //right sensor
  //////////////////////////////////////////////////////////
  pinMode(triggerl, OUTPUT);
  pinMode(echol, INPUT);          //left sensor
  //////////////////////////////////////////////////
  Keyboard.begin();
}
/////////////////MAKING A FUNCTION FOR CALCULATING DURATION AND DISTANCE///////////////////////////////////////
void cal_distance(int trigger,int echo)
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  /////calculating time/////////
  duration = pulseIn(echo,HIGH);
  /////calculating distance////////
  distance = (duration/58.6);
} 
void loop()
{
  ///////////////////////////CALLING THE FUNCTION ////////////////////////////////////
  cal_distance(triggerl,echol);
  distancel = distance;

  cal_distance(triggerr,echor);
  distancer = distance;

  Serial.print(distancel);
  Serial.print('\t');
  Serial.println(distancer);
  delay(100);
  ///////////////////////////APPLYING CONDITIONS/////////////////////////////////////////

  /////////////////////////////////////LEFT SIDE////////////////////////////////////////////
  //////////////////mute//////////////////////////
  if((distancel>=10) && (distancel<=15))
  {
    //digitalWrite(ledl,HIGH);
    Keyboard.press(KEY_F7);
    //delay(1000);
    Serial.println("pressed");
    delay(100);
    Keyboard.releaseAll();
    Serial.println("released");
  }
  /////////////////volume UP//////////////////////////////////
  if((distancel>=20) && (distancel<=25))
  {
    //digitalWrite(ledl,HIGH);
    Keyboard.press(KEY_F9);
    //delay(1000);
    Serial.println("pressed");
    delay(100);
    Keyboard.releaseAll();
    Serial.println("released");
  }
  /////////////////////////////////////RIGHT SIDE/////////////////////////////////////
  /////////////////play_pause////////////////////////////
  if((distancer>=10) && (distancer<=15))
  {
    //digitalWrite(ledr,HIGH);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('p');
    //delay(1000);
    Serial.println("pressed");
    delay(100);
    Keyboard.releaseAll();
    Serial.println("released");
  }
  ///////////////vol DOWN//////////////////////////////////
  if((distancer>=20) && (distancer<=25))
  {
    //digitalWrite(ledr,HIGH);
    Keyboard.press(KEY_F8);
    //delay(1000);
    Serial.println("pressed");
    delay(100);
    Keyboard.releaseAll();
    Serial.println("released");
  }
  delay(100); // again start reading after 100 seconds
}
