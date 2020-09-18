#include <stdio.h>

int main(void) {

float e_lado1, e_lado2, s_area; //declara as variáveis

scanf("%f",&e_lado1); //lê o valor do comprimento do retângulo
printf("comprimento: %f\n", e_lado1); //mostra o valor lido na tela  

scanf("%f",&e_lado2); //lê o valor da altura do retângulo
printf("altura: %f\n", e_lado2); //mostra o valor lido na tela

if(e_lado1 == e_lado2 || e_lado1== 0 || e_lado2 == 0){
printf("não é um retâgulo");
} // verifica e mostra na tela se de fato os valores lidos resultam num retâgulo

else{
s_area = e_lado1*e_lado2; //excuta a operação
printf("Área do retângulo: %f\n", s_area); //mostra na tela a área do retângulo
}

return 0;
}
