//Ligar e desligar Relé
const int pinoRelay = D0;

void setup() {

  Serial.begin(9600);
  pinMode(pinoRelay, OUTPUT);
  digitalWrite(pinoRelay, LOW);
  
}

void loop() {

  digitalWrite(pinoRelay, HIGH);
  Serial.println("Ligado");
  delay(5000);

  digitalWrite(pinoRelay, LOW);
  Serial.println("Desligado");
  delay(1000);
}
