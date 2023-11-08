int nMyNameChars = strlen("Amirali");
  
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  pinMode(20, INPUT);
  attachInterrupt(digitalPinToInterrupt(18), s1, FALLING);
  attachInterrupt(digitalPinToInterrupt(19), s2, FALLING);
  attachInterrupt(digitalPinToInterrupt(20), s3, FALLING);
}

void loop() {
}

void s1() {
  digitalWrite(6, HIGH);
  delay(50000);
  digitalWrite(5, HIGH);
  delay(50000);
  digitalWrite(4, HIGH);
  delay(50000);
  digitalWrite(3, HIGH);
  delay(50000);
  digitalWrite(2, HIGH);
  delay(50000);
  digitalWrite(1, HIGH);
  delay(50000);
  digitalWrite(0, HIGH);
}

void s2() {
  for(int i = 0; i < nMyNameChars + 1; i++){
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(20000);
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(20000);
  }
}

void s3() {
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}
