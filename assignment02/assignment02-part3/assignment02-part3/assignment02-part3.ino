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
  if (Serial.available()){
    int inp = Serial.parseInt();
    if (inp > 9){
      Serial.println("Invalid number");
    }
    else{
      switch (inp){
        case 1:
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
        case 2:
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
        case 3:
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
        case 4:
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
        case 5:
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
        case 6:
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
        case 7:
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
        case 8:
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
        case 9:
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
  }
}
