/* Rotary Encoder Module (KY-040) [S120] : http://rdiot.tistory.com/126 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004

int pin = A0;

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");

  pinMode(pin, INPUT);
  delay(1000);

  lcd.clear();
}

void loop()
{
 
  lcd.setCursor(0,0);
  lcd.print("S120:Rotary Encoder");

  lcd.setCursor(0,1);
  lcd.print("AnalogValue=" + (String)analogRead(pin) + " ");

}
