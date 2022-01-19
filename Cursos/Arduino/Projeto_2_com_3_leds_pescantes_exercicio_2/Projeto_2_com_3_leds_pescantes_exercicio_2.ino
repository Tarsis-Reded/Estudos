void setup() {
  
  pinMode (13,OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (9 ,OUTPUT);
  pinMode (8 ,OUTPUT);
  pinMode (7 ,OUTPUT);
}

void loop() {        //função para se repetir infinitamente 

  digitalWrite (10,1);
  delay(0500);
  digitalWrite(10,0);
  delay(0500);
  
  digitalWrite (11,1);
  delay(0500);
  digitalWrite(11,0);
  delay(0500);


  digitalWrite(12,1);
  delay(0500);
  digitalWrite (12,0);
  delay(0500);
  
  digitalWrite(13,1);// aqui dizemos que a porta 13 vai receber a corrente 
  delay(0500);       // espera 1
  digitalWrite(13,0);//aqui desligamos o led
  delay(0500); //espera meio segundo 

  digitalWrite (10,1);
  delay(0500);
  digitalWrite(10,0);
  delay(0500);
  
  digitalWrite (9,1);
  delay(0500);
  digitalWrite (9,0);
  delay(0500);


  digitalWrite (8,1);
  delay(0500);
  digitalWrite (8,0);
  delay(0500);

  digitalWrite (7,1);
  delay(0500);
  digitalWrite (7,0);
  delay(0500);
  
}
