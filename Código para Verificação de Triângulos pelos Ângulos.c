#include <stdio.h>

int main(void) {
  
float e_angulo1, e_angulo2, e_angulo3; //declara as variáveis

printf("Insira o ângulo 1: ");//instrui o usuário
scanf("%f",&e_angulo1); //lê o valor da variável 

//repetir o mesmo processo com as demais variáveis:

printf("Insira o ângulo 2: ");
scanf("%f",&e_angulo2);

printf("Insira o ângulo 3: "); 
scanf("%f",&e_angulo3);

//verficar se os valores apresentados estão na condição de existência:

float soma = e_angulo1 + e_angulo2 + e_angulo3;

if(e_angulo1 <= 0 || e_angulo2 <= 0 || e_angulo3 <= 0 || soma < 180 ||soma > 180){
printf("\nNão é um triâgulo");
}

else{
//Começa a verificar efetivamente os tipos de triângulo:  

if(e_angulo1 > 90 || e_angulo2 > 90 || e_angulo3 > 90){
printf("\nÉ um triâgulo obtusângulo");
}

else{
if(e_angulo1 == 90 || e_angulo2 == 90 || e_angulo3 ==90){
printf("\nÉ um triâgulo retângulo");
} 

else{
printf("\nÉ um triâgulo acutângulo");
}
}
}

return 0;
}