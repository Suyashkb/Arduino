// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
char *text[]={"Hello !!","How","are","you","hope","you","are","doing well","thank you"};
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("hello");
  delay(1000);
  lcd.clear();
}

void loop()
{
  for(int i=0;i<=9;i++)
  {
    lcd.setCursor(0,0);
    lcd.print(text[i]);
    delay(1000);
    lcd.clear();
    }
    while(1);
}