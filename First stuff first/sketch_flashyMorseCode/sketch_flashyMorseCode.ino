const int pinLed = 13; //standard led pin
const int BUTTON = 4; // Naming switch button pin
int BUTTONstate = 0; // A variable to store Button Status / Input
String name = "Cathal";

// define Morse code dictionary
const char* morse_dict[] = {
  ".-",    // A
  "-...",  // B
  "-.-.",  // C
  "-..",   // D
  ".",     // E
  "..-.",  // F
  "--.",   // G
  "....",  // H
  "..",    // I
  ".---",  // J
  "-.-",   // K
  ".-..",  // L
  "--",    // M
  "-.",    // N
  "---",   // O
  ".--.",  // P
  "--.-",  // Q
  ".-.",   // R
  "...",   // S
  "-",     // T
  "..-",   // U
  "...-",  // V
  ".--",   // W
  "-..-",  // X
  "-.--",  // Y
  "--..",  // Z
  "-----", // 0
  ".----", // 1
  "..---", // 2
  "...--", // 3
  "....-", // 4
  ".....", // 5
  "-....", // 6
  "--...", // 7
  "---..", // 8
  "----."  // 9
};

// get Morse code for a given character
String getMorseCode(char c) {
  if (isAlphaNumeric(c)) {
    return morse_dict[toupper(c) - 'A'];
  }
  return "";
}

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinLed, OUTPUT);    // sets the digital pin as output
  //pinMode (BUTTON, INPUT);
  digitalWrite(pinLed, HIGH);
        delay(125);
        digitalWrite(pinLed, LOW);
  stringToMorse(name); 
  
}

//what else am I meant to do with nothing else lol
void loop() {
  /*BUTTONstate = digitalRead(BUTTON);  // Reading button status / input
  if (BUTTONstate == HIGH)  // Condition to check button input
    { 
      stringToMorse(name); *//*
    }
    else
    {
      digitalWrite(pinLed, LOW);
    }
  */
}

void stringToMorse(String input) {
  for (int i = 0; i < input.length(); i++) {
    String morseString = getMorseCode(input.charAt(i));

  digitalWrite(pinLed, HIGH);
        delay(125);
        digitalWrite(pinLed, LOW);


    for (int j = 0; j < morseString.length(); j++) {
      if(morseString.charAt(j) == '.') {
        digitalWrite(pinLed, HIGH);
        delay(125);
        digitalWrite(pinLed, LOW);
      } else {
        digitalWrite(pinLed, HIGH);
        delay(250);
        digitalWrite(pinLed, LOW);
      }
      //new char
      digitalWrite(pinLed, HIGH);
      delay(2000);
      digitalWrite(pinLed, LOW);
    }
  }
}


