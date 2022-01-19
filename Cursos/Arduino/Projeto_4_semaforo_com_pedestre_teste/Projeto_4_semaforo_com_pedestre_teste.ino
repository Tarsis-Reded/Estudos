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

  if (verdecarro == HIGH){
    digitalWrite(vermelhopedestre,HIGH);
    
    }
  if (vermelhocarro == HIGH){
    digitalWrite(verdepedestre,HIGH);
    }

  digitalWrite(verdecarro,HIGH);
  digitalWrite(vermelhocarro,LOW);
  delay(2000);
  
  digitalWrite(verdecarro,LOW);
  digitalWrite(vermelhocarro,HIGH);
  delay(2000);
  
  
  
  
  

  
}
