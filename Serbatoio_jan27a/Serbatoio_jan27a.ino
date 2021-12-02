const int gMin=2;
const int gMax=3;
const int pompaRiempi=4;
const int pompaSvuota=5;
int riempimento=0;
int gmin_val=0;
int gmax_val=0;


void setup()
{
  pinMode(gMin, INPUT);
  pinMode(gMax, INPUT);
  pinMode(pompaRiempi, OUTPUT);
  pinMode(pompaSvuota, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  gmin_val=digitalRead(gMin);
  gmax_val=digitalRead(gMax);
  if(gmin_val==LOW && gmax_val==LOW){
    riempimento=1;
    digitalWrite(pompaRiempi, HIGH);
    digitalWrite(pompaSvuota, LOW);
    Serial.println("Serbatoio vuoto.");
      
   
  }
  if(gmin_val==HIGH && gmax_val==LOW && riempimento==1){
    
    Serial.println("Serbatoio in riempimento...");
     
   
  }
  if(gmin_val==HIGH && gmax_val==HIGH){
    
    riempimento=0;
    digitalWrite(pompaRiempi, LOW);
    digitalWrite(pompaSvuota, HIGH);
    
    Serial.println("Serbatoio pieno.");
      
  }
  if(gmin_val==HIGH && gmax_val==LOW && riempimento==0){
    
    Serial.println("Svuotamento in corso...");
      
  }
  if(gmin_val==LOW && gmax_val==HIGH){
    digitalWrite(pompaRiempi, LOW);
    digitalWrite(pompaSvuota, LOW);
    Serial.println("Anomalia gallegganti");
  }
}
