#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);
#define S1 7
#define S2 6
#define S3 5
#define S4 4
int vote1=0;
int vote2=0;
int vote3=0;
void setup()
{
  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  lcd.begin(16,2);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Ravi");
  lcd.setCursor(6,0);
  lcd.print("Tej");
  lcd.setCursor(10,0);
  lcd.print("Vivek");
}
void loop()
{
  lcd.setCursor(1,0);
   lcd.print("Ravi");
   lcd.setCursor(1,1);
   lcd.print("vote1");
   lcd.setCursor(6,0);
   lcd.print("Tej");
   lcd.setCursor(6,1);
   lcd.print("vote2");
   lcd.setCursor(10,0);
   lcd.print("Vivek");
   lcd.setCursor(10,1);
   lcd.print("vote3");
   
   if(digitalRead(S1)==0)
   vote1++;
   while(digitalRead(S1)==0);
   
   if(digitalRead(S2)==0)
   vote2++;
   while(digitalRead(S2)==0);
   
   if(digitalRead(S3)==0)
   vote3++;
   while(digitalRead(S3)==0);
   
   if(digitalRead(S4)==0)
   {
    int vote=vote1+vote2+vote3;
    if(vote)
    {
      if(vote1>vote2 && vote1>vote3) 
      {
        lcd.clear();
        lcd.print("Ravi is Winner");
        delay(3000);
        lcd.clear();
      }
      else if(vote2>vote1 && vote2>vote3)
      {
        lcd.clear();
        lcd.print("Tejas is Winner");
        delay(3000);
        lcd.clear();
      }
      else 
      {
        lcd.clear();
        lcd.print("Vivek is Winner");
        delay(3000);
        lcd.clear();
      }
    }
   }
//   else 
//   {
//    lcd.clear();
//    lcd.print("No Voting");
//    delay(3000);
//    lcd.clear();
//   }
   
   
 }
