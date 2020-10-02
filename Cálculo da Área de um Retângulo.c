#include <stdio.h>

int main(void) {

float e_lado1, e_lado2, s_area; //declara as variáveis

printf("Digite o comprimento: "); //intrução ao usuário
scanf("%f",&e_lado1); //lê o valor do comprimento do retângulo 

printf("Digite a altura: "); //intrução ao usuário
scanf("%f",&e_lado2); //lê o valor da altura do retângulo

if(e_lado1 == e_lado2 || e_lado1== 0 || e_lado2 == 0 || e_lado1 < 0 ||e_lado2 < 0){
printf("não é um retâgulo");
} // verifica e mostra na tela se de fato os valores lidos resultam num retâgulo

else{
s_area = e_lado1*e_lado2; //excuta a operação
printf("\nÁrea do retângulo: %f", s_area); //mostra na tela a área do retângulo
}

return 0;
}
