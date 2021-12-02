const int Led=3;
const int Pulsante=2;
int pulsante_val;
void setup() {
  // put your setup code here, to run once:
  pinMode(Pulsante, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsante_val=digitalRead(Pulsante);
  if(pulsante_val==HIGH){
    digitalWrite(Led, HIGH);
  } else{
    digitalWrite(Led, LOW);
  }
}
