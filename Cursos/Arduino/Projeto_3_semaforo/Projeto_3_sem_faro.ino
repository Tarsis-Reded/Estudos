int verdecarro = 13;
int amarelocarro = 11;
int vermelhocarro = 9;

void setup() {
 pinMode(verdecarro,OUTPUT);
 pinMode(amarelocarro,OUTPUT);
 pinMode(vermelhocarro,OUTPUT);

}

void loop() {

  digitalWrite(verdecarro,HIGH);
  delay(5000);
  digitalWrite(amarelocarro,HIGH);
  digitalWrite(verdecarro,LOW);
  delay(3000);
  digitalWrite(amarelocarro,LOW);
  digitalWrite(vermelhocarro,HIGH);
  delay(5000);
  digitalWrite(vermelhocarro,LOW);
  digitalWrite(amarelocarro,HIGH);
  delay(3000);

}
