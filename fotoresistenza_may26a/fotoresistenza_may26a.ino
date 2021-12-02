int valore = 0;
int lumA = 0;
int lumL = 0;
int valoreConvertito = 0;
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valore = analogRead(A0);
  lumL = map(valore, 6, 679, 0, 255);
  valoreConvertito = map(lumL, 0, 255, 0, 100);
  analogWrite(3, lumL);
  lumA = map(valore, 6, 679, 0, 100);
  Serial.println("luminosita ambiente: ");
  Serial.println(lumA);
  Serial.println("luminosita led: ");
  Serial.println(valoreConvertito);
  
  
}
