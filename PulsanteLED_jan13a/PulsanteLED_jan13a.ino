const int pulsante = 2;
const int LED = 10;

bool statoPulsante = 0;
bool statoPulsantePrec = 0;
bool statoLED = 0;

void setup() {
  pinMode(pulsante, INPUT);
  pinMode(LED, OUTPUT);
  
}

void loop() {
  statoPulsante = digitalRead(pulsante);
  if(statoPulsante != statoPulsantePrec){
    if(statoPulsante == HIGH){
      statoLED = !statoLED;
      digitalWrite(LED, statoLED);
    }
  }
  statoPulsantePrec = statoPulsante;
}
