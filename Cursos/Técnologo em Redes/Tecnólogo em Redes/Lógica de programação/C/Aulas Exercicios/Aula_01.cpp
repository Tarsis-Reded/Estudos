
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Olá terraqueos\n");

    int idade = 35; // declaração de variável
    
    int vl1;
    int vl2;

    printf("Digite um número:");

    scanf ("%i",& vl1); //input 

    printf("Digite outro número:");

    scanf ("%i",& vl2);

    //scanf_s("%i",&xvalor); input visual studio  
    printf("%i" "+" "%i" "=" "%i",& vl1, vl2, vl1+vl2);

    return(0);


}
