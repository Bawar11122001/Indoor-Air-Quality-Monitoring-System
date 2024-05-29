#include<LiquidCrystal_I2C.h>
#include<Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mq_value = analogRead(A0);
  Serial.println(mq_value);
  lcd.setCursor(0, 0);
  lcd.print("Air quality: ");
  lcd.print(mq_value);
  if (mq_value <= 180)
  { 
    lcd.setCursor(1,1);
    lcd.print("Good ");
  }
  else if (mq_value >= 181 && mq_value < 350){
    lcd.setCursor(1,1);
    lcd.print("Poor ");
  }
  else {
    lcd.setCursor(1,1);
    lcd.print("Toxic ");
  }
delay(3000);
}
