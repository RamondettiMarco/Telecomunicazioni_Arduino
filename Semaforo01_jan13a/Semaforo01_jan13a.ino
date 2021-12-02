void setup() {
  // imposta i led come output
  pinMode(2, OUTPUT); // led verde
  pinMode(3, OUTPUT); // led giallo
  pinMode(4, OUTPUT); // led rosso
}

void loop() {
  digitalWrite(2, HIGH); // accensione led verde
  digitalWrite(3, HIGH); // accensione led giallo
  digitalWrite(4, HIGH); // accensione led rosso

  delay(1000); // millisecondi

  digitalWrite(2, LOW); // accensione led verde
  digitalWrite(3, LOW); // accensione led giallo
  digitalWrite(4, LOW); // accensione led rosso

  delay(1000);
}
