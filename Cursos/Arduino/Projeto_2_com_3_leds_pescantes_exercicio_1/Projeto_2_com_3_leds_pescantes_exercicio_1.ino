void setup() {
  
  pinMode (13,OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (10,OUTPUT);
  
}

void loop() {        //função para se repetir infinitamente 

  digitalWrite(13,1);// aqui dizemos que a porta 13 vai receber a corrente 
  delay(500);       // espera 1
  digitalWrite(13,0);//aqui desligamos o led
  delay(100);        //espera meio segundo 
  
  digitalWrite(12,1);
  delay(500);
  digitalWrite (12,0);
  delay(100);
  
  digitalWrite (11,1);
  delay(500);
  digitalWrite(11,0);
  delay(100);

  digitalWrite (10,1);
  delay(500);
  digitalWrite (10,0);
  delay(100);
}
