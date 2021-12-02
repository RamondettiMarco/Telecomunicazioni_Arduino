
const int verde = 2;
const int giallo = 3;
const int rosso = 4;
const int pulsante = 5;
const int verde_pedoni = 6;
const int rosso_pedoni = 7;

void setup() {
  // imposta i led come output
  pinMode(verde, OUTPUT); // led verde
  pinMode(giallo, OUTPUT); // led giallo
  pinMode(rosso, OUTPUT); // led rosso
  
  pinMode(pulsante, INPUT);  // pulsante
  
  pinMode(verde_pedoni, OUTPUT); // led verde pedoni
  pinMode(rosso_pedoni, OUTPUT); // led rosso pedoni
}

void loop() {
  if (digitalRead(pulsante)==LOW){
  digitalWrite(verde, HIGH); // accensione led verde
  digitalWrite(giallo, LOW); 
  digitalWrite(rosso, LOW);
  digitalWrite(verde_pedoni, LOW);
  digitalWrite(rosso_pedoni, HIGH); // accensione led rosso pedoni

  delay(4000); // millisecondi

  digitalWrite(verde, LOW); 
  digitalWrite(giallo, HIGH); // accensione led giallo
  digitalWrite(rosso, LOW);
  digitalWrite(verde_pedoni, LOW);
  digitalWrite(rosso_pedoni, HIGH); // accensione led rosso pedoni

  
  delay(2000);

  digitalWrite(verde, LOW); 
  digitalWrite(giallo, LOW); 
  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, LOW);
  digitalWrite(rosso_pedoni, HIGH); // accensione led rosso pedoni


  delay(4000);
  }

  if (digitalRead(pulsante)==HIGH) {
  
  //digitalWrite(2, LOW); 
  //digitalWrite(3, LOW); 
  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, HIGH); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);
  
  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, LOW); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);

  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, HIGH); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);

  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, LOW); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);

  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, HIGH); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);

  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, LOW); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);

  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, HIGH); // accensione led verde pedoni
  digitalWrite(rosso_pedoni, LOW);

  delay(500);

  //digitalWrite(2, LOW); 
  //digitalWrite(3, LOW); 
  digitalWrite(rosso, HIGH); // accensione led rosso
  digitalWrite(verde_pedoni, LOW); 
  digitalWrite(rosso_pedoni, HIGH); // accensione led rosso pedoni

  }
}
