int nMyNameChars = strlen("Amirali");
  
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
}

void loop() {
  if(digitalRead(12) == 0){
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(0, HIGH);
  }
  if(digitalRead(11) == 0){
    for(int i = 0; i < nMyNameChars + 1; i++){
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(200);
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      delay(200);
    }  
  }
  if(digitalRead(10) == 0){
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}
