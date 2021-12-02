const int LED = 2;
const int Y0 = 3;
const int Y1 = 4;
const int X0 = 5;
const int X1 = 6;
bool x0 = 0;
bool x1 = 0;
bool y0 = 0;
bool y1 = 0;
bool z = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(Y0, INPUT);
  pinMode(Y1, INPUT);
  pinMode(X0, INPUT);
  pinMode(X1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x0 = digitalRead(X0);
  x1 = digitalRead(X1);
  y0 = digitalRead(y0);
  y1 = digitalRead(y1);

  z = ((!x0&&!x1) || (y0&&y1) || (!x1&&y0) || (!x1&&y1) || (!x0&&y1));
  digitalWrite(LED, z);

}
