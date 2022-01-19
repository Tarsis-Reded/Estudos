int ledverde = 13;
int ledamarelo = 11;
int ledvermelho = 9;
int ledverdeped = 7;
int ledvermelhoped = 5;


void setup()
{
pinMode(ledverde,OUTPUT);
pinMode(ledamarelo,OUTPUT);
pinMode(ledvermelho,OUTPUT);
pinMode(ledvermelhoped,OUTPUT);
pinMode(ledverdeped,OUTPUT);
}
void loop()
{
if(digitalRead(ledvermelho)==LOW){
digitalWrite(ledverde,HIGH);
digitalWrite(ledvermelhoped,HIGH);
delay(1000);    
  
digitalWrite(ledverde,LOW);
digitalWrite(ledvermelhoped,LOW);
delay(1000);
  
digitalWrite(ledamarelo,HIGH);
delay(1000); 
digitalWrite(ledamarelo,LOW);
delay(1000);    
   
}
if(digitalRead(ledverde)==LOW){
digitalWrite(ledvermelho,HIGH);
digitalWrite(ledverdeped,HIGH);    
delay(1000);  

digitalWrite(ledvermelho,LOW);
digitalWrite(ledverdeped,LOW);  
delay(1000);


digitalWrite(ledamarelo,HIGH);
delay(1000); 
digitalWrite(ledamarelo,LOW);
delay(1000);     
}

}
