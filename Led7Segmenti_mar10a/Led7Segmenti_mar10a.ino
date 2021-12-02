const int pulsante=2;
const int a=3;
const int b=4;
const int c=5;
const int d=6;
const int e=7;
const int f=8;
const int g=9;
int NumPressioni = 0;
int StatoPuls= 0;
int StatoPulsPrec = 0;
void setup() {
  pinMode(pulsante, INPUT); 
  pinMode(a, OUTPUT); 
  pinMode(b, OUTPUT); 
  pinMode(c, OUTPUT); 
  pinMode(d, OUTPUT); 
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT); 
  pinMode(g, OUTPUT); 
  Serial.begin(9600); 
}
void loop() {
  if (NumPressioni == 0) {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
 }
  StatoPuls= digitalRead(pulsante);
  if (StatoPuls!= StatoPulsPrec) {
    if (StatoPuls== HIGH) {
      NumPressioni++;
      Serial.print("Num press: ");
      Serial.println(NumPressioni);
      if (NumPressioni == 1) {
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
      }
      if (NumPressioni == 2) {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
      } 
      if (NumPressioni == 3) {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
      }
      if (NumPressioni == 4) {
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
      }
      if (NumPressioni == 5) {
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
      }
      if (NumPressioni == 6) {
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
      }
      if (NumPressioni == 7) {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
      }
      if (NumPressioni == 8) {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
      }
      if (NumPressioni == 9) {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
      }
      if(NumPressioni == 10) {
        NumPressioni = 0;
      } 
    } 
  }
StatoPulsPrec = StatoPuls;
}
