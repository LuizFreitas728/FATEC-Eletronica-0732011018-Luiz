#include <stdio.h>

int main(void) {

double e_valor_em_m_por_seg, s_valor_em_km_por_hora; //declara as variáveis

printf("Insira um valor em m/s: "); //instrução ao usuário
scanf("%lf",&e_valor_em_m_por_seg); //lê o valor de entrada

s_valor_em_km_por_hora = e_valor_em_m_por_seg*3.6; //executa a operação
printf("\nValor inserido km/h: %lf",s_valor_em_km_por_hora); //mostra o resultado na tela

return 0;
}
