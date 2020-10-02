#include <stdio.h>

int main(void) {

double e_valor_em_polegada, s_valor_em_mm; //declara as variáveis

printf("Digite o valor em polegada: "); //intrução ao usuário
scanf("%lf",&e_valor_em_polegada); //Lê a variável de entrada

s_valor_em_mm = e_valor_em_polegada*25.4; //executa a operação
printf("\nValor em mm: %lf", s_valor_em_mm); //mostra o resultado na tela

return 0;
}
