#include <stdio.h>

int main(void) {

int e_numero, resto1, resto2, resto3; //Declara as variáveis
printf("Digite o número: "); //instrução para o usuário
scanf("%i",&e_numero); //lê o valor de entrada

resto1 = e_numero % 10;
resto2 = e_numero % 5;
resto3 = e_numero % 2;
//executa as operações

//realiza o algoritmo:
if(resto1 == 0){
printf("\nÉ divisível por 10"); 
}

if(resto2 == 0){
printf("\nÉ divisível por 5");
}

if(resto3 == 0){
printf("\nÉ divisível por 2"); 
}

if(resto1 !=0 && resto2 != 0 && resto3 != 0){
printf("\nNão é divisível por nem por 10, nem por 5, nem por 2"); 
}

return 0;
}