#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  pinMode(A4,INPUT);
  pinMode(3,INPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);pinMode(0,OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("VEHICLE SERVICE");
   lcd.setCursor(4,1);
  lcd.print("TESTING");  
  int swt=digitalRead(3);
  int alch=analogRead(A4);
  if (swt == 1)
  {
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("HELMET WEARED");
    digitalWrite(2,1);
    delay(1000);
  }
  else
  {
    
    digitalWrite(2,0);
  }
  if (alch > 120)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("LIQUOR CONSUMED");
    digitalWrite(1,1); delay(100); digitalWrite(0,1);  delay(100);digitalWrite(1,0);  delay(100);digitalWrite(0,0); delay(100);
    digitalWrite(1,1); delay(100); digitalWrite(0,1); delay(100); digitalWrite(1,0); delay(100); digitalWrite(0,0); delay(100); 
    
    
  }
 

}
