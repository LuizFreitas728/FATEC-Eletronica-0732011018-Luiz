#include <stdio.h>

int main(void) {

float e_valor_em_m_por_seg, s_valor_em_km_por_hora; //declara as variáveis

scanf("%f",&e_valor_em_m_por_seg); //lê o valor de entrada
printf("valor de entrada: %f\n",e_valor_em_m_por_seg); //mostra esse valor na tela

s_valor_em_km_por_hora = e_valor_em_m_por_seg*3.6; //executa a operação
printf("valor de saída: %f\n",s_valor_em_km_por_hora); //mostra o resultado na tela

return 0;
}