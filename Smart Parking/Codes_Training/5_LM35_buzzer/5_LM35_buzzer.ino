const int lm35_pin = A0;  /* LM35 O/P pin */
int buzzer = 8 ;
int temp_adc_val;
float temp_val;
const int temp_max = 40;

void setup() {
  Serial.begin(9600);
  pinMode (buzzer, OUTPUT) ;
}

void loop() {
  temp_adc_val = analogRead(lm35_pin);  /* Read Temperature */
  temp_val = (temp_adc_val * 4.88); /* Convert adc value to equivalent voltage */
  temp_val = (temp_val/10); /* LM35 gives output of 10mv/°C */
  Serial.print("Temperature = ");
  Serial.print(temp_val);
  Serial.println(" Degree Celsius\n");
  if(temp_val >= temp_max)
  {
    /*bloc d'execution*/
    digitalWrite (buzzer, HIGH) ; //no tone
  }
  else
  {
    digitalWrite (buzzer, LOW) ; 
  }
  delay(500);
}
