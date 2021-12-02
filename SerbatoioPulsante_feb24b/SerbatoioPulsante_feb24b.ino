const int Gmin=2;
const int Gmax=3;
const int pompa_riempi=4;
const int pompa_svuota=5;
const int pulsante=6;
bool riempi=0;
bool svuotamento=0;
bool SensDow=0;
bool SensUp=0;
bool statoPuls=0;
bool statoPrec=0;
bool controllo=0;
void setup(){
   pinMode(Gmin,INPUT);
   pinMode(Gmax,INPUT);
   pinMode(pulsante,INPUT);
   pinMode(pompa_svuota,OUTPUT);
   pinMode(pompa_riempi,OUTPUT);
   Serial.begin(9600); 
}
void loop(){
  SensDow= digitalRead(Gmin);
  SensUp= digitalRead(Gmax);
  statoPuls=digitalRead(pulsante);
  if(statoPuls != statoPrec){
    if(statoPuls==HIGH){
      controllo =!controllo;
      }
    }
  if(controllo == 1){
    Serial.println("Pompe attivate");
  if(SensDow == LOW && SensUp ==LOW){
    riempi=1;
    svuotamento=0;
    digitalWrite(pompa_svuota, LOW);
    digitalWrite(pompa_riempi,HIGH);
    Serial.println("Serbatoio vuoto");
  }
  if(SensDow == HIGH && SensUp ==LOW && riempi == 1){
    digitalWrite(pompa_riempi,HIGH);
    Serial.println("Serbatoio in riempi");
  }   
  if(SensDow == HIGH && SensUp == HIGH) {
   riempi=0;
   svuotamento=1;
    digitalWrite(pompa_riempi,LOW);
    digitalWrite(pompa_svuota,HIGH);
    Serial.println("Serbatoio pieno");
  } 
  if(SensDow == HIGH && SensUp == LOW && svuotamento == 1){
   digitalWrite(pompa_svuota,HIGH);
   Serial.println("Serbatoio in svuotamento");
  }
  if(SensDow == LOW && SensUp == HIGH)  {
    digitalWrite(pompa_riempi,LOW);
    digitalWrite(pompa_svuota,LOW);  
    Serial.println("Anomalia galleggianti");
  }
}
else {
    digitalWrite(pompa_riempi,LOW);
    digitalWrite(pompa_svuota,LOW);
    Serial.println("Pompe disattivate"); 
}
statoPrec=statoPuls;

}
