#include <stdio.h>

int main(void) {

double e_resistencia1, e_resistencia2, s_req; //declara as variáveis

printf("Insira o valor do resistor 1: ");
scanf("%lf",&e_resistencia1);

printf("Insira o valor do resistor 2: ");
scanf("%lf",&e_resistencia2);
//intrui o usuário e lê os valoress

s_req = 1/ (1/ e_resistencia1 + 1/ e_resistencia2); //executa a operação

printf("\nResistência equivalente em paralelo: %lf Ω", s_req); //mostra o resultado na tela

return 0;
}
