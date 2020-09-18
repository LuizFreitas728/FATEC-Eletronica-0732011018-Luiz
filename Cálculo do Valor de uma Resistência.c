#include <stdio.h>

int main(void) {

float e_tensao, e_corrente, s_resistencia; //declara as variáveis

scanf("%f",&e_tensao); 
printf("Valor da tensão: %f\n",e_tensao);

scanf("%f",&e_corrente);
printf("Valor da corrente: %f\n",e_corrente);
//lê e mostra na tela os valores lidos

s_resistencia = e_tensao/ e_corrente; //executa a operação

printf("Valor da resistência: %f\n", s_resistencia); //mostra o resultado na tela

return 0;
}