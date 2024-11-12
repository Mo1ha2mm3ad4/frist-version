#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  lcd.begin(16,2);
}

void loop() {
 lcd.home();
 lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("hello world");
 }
