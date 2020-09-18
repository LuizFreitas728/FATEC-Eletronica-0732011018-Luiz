#include <stdio.h>

int main(void) {

float e_resistencia1, e_resistencia2, s_req; //declara as variáveis

scanf("%f",&e_resistencia1);
printf("Valor do resistor 1: %f\n", e_resistencia1);

scanf("%f",&e_resistencia2);
printf("Valor do resistor 2: %f\n", e_resistencia2);
//lê e mostra na tela os valores lidos

s_req = 1/ (1/ e_resistencia1 + 1/ e_resistencia2); //executa a operação

printf("Resistência equivalente em paralelo: %f\n", s_req); //mostra o resultado na tela

return 0;
}