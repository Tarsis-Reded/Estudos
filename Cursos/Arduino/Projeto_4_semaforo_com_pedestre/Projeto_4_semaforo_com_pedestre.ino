//inicio do programa semaforo com pedestre 
//aqui estou dizendo dpara o computador os pinos 
//que vou usar e dando um nome a cada um dele
  int verdecarro = 13;
  int amarelocarro = 11;
  int vermelhocarro = 9;
  int verdepedestre = 7;
  int vermelhopedestre = 5;

void setup() {

  
  pinMode(verdecarro,OUTPUT);
  pinMode(amarelocarro,OUTPUT);
  pinMode(vermelhocarro,OUTPUT);
  pinMode(verdepedestre,OUTPUT);
  pinMode(vermelhopedestre,OUTPUT);
}

void loop() {

  digitalWrite(verdecarro,HIGH);
  digitalWrite(vermelhopedestre,HIGH);
  delay(5000);
  digitalWrite(amarelocarro,HIGH);
  digitalWrite(verdecarro,LOW);
  delay(3000);
  digitalWrite(amarelocarro,LOW);
  digitalWrite(vermelhocarro,HIGH);
  digitalWrite(vermelhopedestre,LOW);
  digitalWrite(verdecarro,HIGH);
  delay(5000);
  digitalWrite(vermelhocarro,LOW);
  digitalWrite(amarelocarro,HIGH);
  delay(3000);
  digitalWrite(verdecarro,HIGH);
  digitalWrite(amarelocarro,LOW);
  digitalWrite(verdepedestre,LOW);
  
}
