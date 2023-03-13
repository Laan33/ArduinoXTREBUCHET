int pinLed = 13; //standard led pin

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinLed, OUTPUT);    // sets the digital pin as output
}

//what else am I meant to do with nothing else lol
void loop() {
  digitalWrite(pinLed, HIGH);
  delay(150);
  digitalWrite(pinLed, LOW);
  delay(150);
}
