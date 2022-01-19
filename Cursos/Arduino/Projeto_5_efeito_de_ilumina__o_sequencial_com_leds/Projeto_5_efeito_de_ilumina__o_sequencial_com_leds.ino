//indo do programa super maquina 
//aqui estou dizendo para o computador os pinos 
//que vou usar e dando um nome a cada um deles 
int pin0=13;
int pin1=12;
int pin2=11;
int pin3=10;
int pin4=9;
int pin5=8;
int pin6=7;
int pin7=6;
int pin8=5;

// aqui eu digo que os oinos escolhidos são de saida 
void setup() {
  pinMode(pin0,OUTPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
  
}

void loop() {
  digitalWrite(pin0,HIGH);
  delay(50);
  digitalWrite(pin0,LOW);
  digitalWrite(pin1,HIGH);
  delay(50);
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  delay(50);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  delay(50);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(50);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(50);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  delay(50);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  delay(50);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,HIGH);  
  delay(50);
  digitalWrite(pin8,LOW);
  digitalWrite(pin7,HIGH);
  delay(50);
  digitalWrite(pin7,LOW);
  digitalWrite(pin6,HIGH);
  delay(50);
  digitalWrite(pin6,LOW);
  digitalWrite(pin5,HIGH);
  delay(50);
  digitalWrite(pin5,LOW);
  digitalWrite(pin4,HIGH);
  delay(50);
  digitalWrite(pin4,LOW);
  digitalWrite(pin3,HIGH);
  delay(50);
  digitalWrite(pin3,LOW);
  digitalWrite(pin2,HIGH);
  delay(50);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,HIGH);
  delay(50);
  digitalWrite(pin1,LOW);
  digitalWrite(pin0,HIGH);
  digitalWrite(pin0,LOW);
  
  
}
