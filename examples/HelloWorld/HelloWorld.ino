#include <LiquidCrystalSerial.h>

#define SH_CP 12
#define DS    11
#define ST_CP 10

LiquidCrystalSerial lcd(SH_CP, DS, ST_CP);
//LiquidCrystalSerial lcd(SH_CP, DS, ST_CP, RS, RW, ENABLE, D4, D5, D6, D7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}