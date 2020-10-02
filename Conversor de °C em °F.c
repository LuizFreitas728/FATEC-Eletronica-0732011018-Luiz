#include <stdio.h>

int main(void) {

double e_graus_celsius, s_graus_farenheit; //declara as variáveis

printf("Insira um valor de temperatura em °C: ");
scanf("%lf",&e_graus_celsius); //lê a temperatura em °C
s_graus_farenheit = (9*e_graus_celsius + 160)/ 5; //executa a operação
printf("\nValor da temperatura inserida em °F: %lf", s_graus_farenheit); //mostra o resultado na tela

return 0;
}
