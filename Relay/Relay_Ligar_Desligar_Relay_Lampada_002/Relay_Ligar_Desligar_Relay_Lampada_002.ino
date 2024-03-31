//Ligar e desligar Relé acender lampada
const int pinoRelay = D0;

void setup() {

  Serial.begin(9600);
  pinMode(pinoRelay, OUTPUT);
  digitalWrite(pinoRelay, LOW);
  
}

void loop() {

  digitalWrite(pinoRelay, HIGH);
  Serial.println("Lamapada Ligado");
  delay(10000);

  digitalWrite(pinoRelay, LOW);
  Serial.println("Lamapada Desligado");
  delay(5000);
}

