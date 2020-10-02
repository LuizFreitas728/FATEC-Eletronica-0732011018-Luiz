#include <stdio.h>

int main(void) {

float e_lado1, e_lado2, e_lado3; //declara as variáveis

printf("Insira o tamanho do lado 1: ");//instrui o usuário
scanf("%f",&e_lado1); //lê o valor da variável 

//repetir o mesmo processo com as demais variáveis:

printf("Insira o tamanho do lado 2: ");
scanf("%f",&e_lado2);

printf("Insira o tamanho do lado 3: "); 
scanf("%f",&e_lado3);

//verficar se os valores apresentados resultam de fato em um triângulo conforme a condição de existência:

if(e_lado1 > e_lado2 + e_lado3 || e_lado2 > e_lado1 + e_lado3 || e_lado3 > e_lado1 + e_lado2 || e_lado1 == 0 || e_lado2 == 0 || e_lado3 == 0 || e_lado1 < 0 || e_lado2 < 0 || e_lado3 < 0){
printf("não é um triâgulo");
}

else{
//Começa a verificar efetivamente os tipos de triângulo:

if(e_lado1 == e_lado2 && e_lado1 == e_lado3){
printf("é um triângulo equilátero");  
}

else{ 
if(e_lado1 == e_lado2 || e_lado1 == e_lado3 || e_lado2 == e_lado3){
printf("é um triângulo isósceles");
}

else{
printf("é um triângulo escaleno");
}
}
}

return 0;
}
