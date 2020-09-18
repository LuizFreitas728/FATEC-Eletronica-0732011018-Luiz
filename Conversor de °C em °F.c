#include <stdio.h>

int main(void) {

float e_graus_celsius, s_graus_farenheit; //declara as variáveis

scanf("%f",&e_graus_celsius); //lê o a temperatura em °C
printf("Valor em °C: %f\n", e_graus_celsius); //mostra na tela

s_graus_farenheit = (9*e_graus_celsius + 160)/ 5; //executa a operação
printf("Valor em °F: %f\n", s_graus_farenheit); //mostra o resultado na tela

return 0;
}