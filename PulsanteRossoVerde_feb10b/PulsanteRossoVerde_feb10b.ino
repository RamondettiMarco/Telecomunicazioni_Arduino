const int LedRosso=3;
const int Pulsante=2;
const int LedVerde=4;
int pulsante_val;
void setup() {
  // put your setup code here, to run once:
  pinMode(Pulsante, INPUT);
  pinMode(LedRosso, OUTPUT);
  pinMode(LedVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsante_val=digitalRead(Pulsante);
  if(pulsante_val==HIGH){
    digitalWrite(LedRosso, HIGH);
    digitalWrite(LedVerde, LOW);
  } else{
    digitalWrite(LedRosso, LOW);
    digitalWrite(LedVerde, HIGH);
  }
}
