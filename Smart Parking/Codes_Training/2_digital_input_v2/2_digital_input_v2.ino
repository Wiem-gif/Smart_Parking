
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  //digitalRead(buttonPin) = HIGH or LOW
  //HIGH = 1
  //LOW = 0
  buttonState = digitalRead(buttonPin);
  // buttonState = 1 (HIGH)

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  //(buttonState == HIGH) = true or false
  //true
  if (buttonState == HIGH) 
  {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } 
  else 
  {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
