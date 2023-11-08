#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 3;
char keys[ROWS][COLS] ={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {36,38,40,42};
byte colPins[COLS] = {30,26,22};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(A8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char keyHolder = keypad.waitForKey();
  Serial.println(keyHolder);
  switch (keyHolder){
    case '0':
        digitalWrite(A8 , LOW);
        digitalWrite(A7 , LOW);
        digitalWrite(A6 , LOW);
        digitalWrite(A5 , LOW);
        digitalWrite(A4 , LOW);
        digitalWrite(A3 , LOW);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '1':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , LOW);
        digitalWrite(A6 , LOW);
        digitalWrite(A5 , LOW);
        digitalWrite(A4 , LOW);
        digitalWrite(A3 , LOW);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '2':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , LOW);
        digitalWrite(A5 , LOW);
        digitalWrite(A4 , LOW);
        digitalWrite(A3 , LOW);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '3':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , LOW);
        digitalWrite(A4 , LOW);
        digitalWrite(A3 , LOW);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '4':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , HIGH);
        digitalWrite(A4 , LOW);
        digitalWrite(A3 , LOW);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '5':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , HIGH);
        digitalWrite(A4 , HIGH);
        digitalWrite(A3 , LOW);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '6':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , HIGH);
        digitalWrite(A4 , HIGH);
        digitalWrite(A3 , HIGH);
        digitalWrite(A2 , LOW);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '7':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , HIGH);
        digitalWrite(A4 , HIGH);
        digitalWrite(A3 , HIGH);
        digitalWrite(A2 , HIGH);
        digitalWrite(A1 , LOW);
        digitalWrite(A0 , LOW);
        break;
    case '8':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , HIGH);
        digitalWrite(A4 , HIGH);
        digitalWrite(A3 , HIGH);
        digitalWrite(A2 , HIGH);
        digitalWrite(A1 , HIGH);
        digitalWrite(A0 , LOW);
        break;
    case '9':
        digitalWrite(A8 , HIGH);
        digitalWrite(A7 , HIGH);
        digitalWrite(A6 , HIGH);
        digitalWrite(A5 , HIGH);
        digitalWrite(A4 , HIGH);
        digitalWrite(A3 , HIGH);
        digitalWrite(A2 , HIGH);
        digitalWrite(A1 , HIGH);
        digitalWrite(A0 , HIGH);
        break;
    default:
        break;
  }
}
