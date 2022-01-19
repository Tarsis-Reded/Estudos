//utilizamos "//" para  inserir um comentario

void setup (){ //aqui temos uma função que o nome dela é setup ou método
  
   pinMode (10,OUTPUT);  //utilizamos a porta digital 10, OUTPUT é uma porta de saida
   pinMode (8,OUTPUT);
   pinMode (6,OUTPUT);
}

void loop(){ //função loop ela será executando varias vezes pelo arduino
    
   digitalWrite (10,1); //na porta 10 atribuimos o valor 1 e cai atribuir 5 volts na porta 10
     delay (1000); //aqui o led fica aceso(parado) por 1 segundo 
    
   digitalWrite (10,0); //na porta 10 atribuimos o valor 0, vai atribuir 0 volts na porta 10
    delay (1000); //aqui o led fica apagada (parado) por 1 segundo

    digitalWrite (8,1);
    delay(500);

    digitalWrite (8,0);
    delay(500);

    digitalWrite (6,1);
    delay(1000);

    digitalWrite (6,0);
    delay (1000);
}
