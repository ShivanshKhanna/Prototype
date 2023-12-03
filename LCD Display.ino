#include <LiquidCrystal_I2C.h>

#include <Wire.h>;

LiquidCrystal_I2C lcd1(0x27, 16, 2);

void setup() {
lcd1.begin();
lcd1.backlight();
}

void loop() {
lcd1.setCursor(0,0);
lcd1.print("Amount Required");

lcd1.setCursor(0,1);
lcd1.print("$3.00");

delay(2500);

lcd1.clear();
lcd1.setCursor(0,0);
lcd1.print("Amount Paid");
lcd1.setCursor(0,1);
lcd1.print("Drive Safe");
delay(2000);
lcd1.clear();
}
