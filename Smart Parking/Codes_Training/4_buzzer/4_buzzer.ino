/* Arduino tutorial - Passive Buzzer Module 
   More info and circuit: http://www.ardumotive.com
   Dev: Giannis Vasilakis // Date: 12/11/2017  */
   
int buzzer = 8 ;
void setup ()
{
  pinMode (buzzer, OUTPUT) ;
  digitalWrite (buzzer, HIGH) ; //no tone
  delay (1000) ;
  digitalWrite (buzzer, LOW) ;
}

void loop ()
{

}
