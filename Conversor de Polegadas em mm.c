#include <stdio.h>

int main(void) {

float e_valor_em_polegada, s_valor_em_mm; //declara as variáveis

scanf("%f",&e_valor_em_polegada); //Lê a variável de entrada
printf("valor de entrada:%f\n", e_valor_em_polegada); //Motra o valor da variável de entrada na tela

s_valor_em_mm = e_valor_em_polegada*25.4; //executa a operação
printf("valor de saída:%f\n", s_valor_em_mm); //mostra o resultado na tela

return 0;
}