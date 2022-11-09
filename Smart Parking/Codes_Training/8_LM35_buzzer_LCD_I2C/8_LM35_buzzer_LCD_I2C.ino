#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display


const int lm35_pin = A0;  /* LM35 O/P pin */
int buzzer = 8 ;
int temp_adc_val;
float temp_val;
const int temp_max = 28;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();      
  pinMode (buzzer, OUTPUT) ;
}

void loop() {
  temp_adc_val = analogRead(lm35_pin);  /* Read Temperature */
  temp_val = (temp_adc_val * 4.88); /* Convert adc value to equivalent voltage */
  temp_val = (temp_val/10); /* LM35 gives output of 10mv/°C */
  Serial.print("Temperature = ");
  Serial.print(temp_val);
  Serial.println(" Degree Celsius");
  lcd.setCursor(0,0); 
  lcd.print("T = ");
  lcd.setCursor(4,0); 
  lcd.print(temp_val);
  if(temp_val >= temp_max)
  {
    /*bloc d'execution*/
    digitalWrite (buzzer, LOW) ; //no tone
    Serial.println("***************************************");
    Serial.println("Temperature not ok\n");
  }
  else
  {
    digitalWrite (buzzer, HIGH) ; 
    Serial.println("***************************************");
    Serial.println("Temperature ok\n");
  }
  delay(500);
}
