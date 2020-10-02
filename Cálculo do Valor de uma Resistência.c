#include <stdio.h>

int main(void) {

double e_tensao, e_corrente, s_resistencia; //declara as variáveis

printf("Insira o valor da tensão elétrica: ");
scanf("%lf",&e_tensao); 

printf("Insira o valor da corrente elétrica: ");
scanf("%lf",&e_corrente);
//instrui o usuário lê os valores

s_resistencia = e_tensao/ e_corrente; //executa a operação

printf("\nValor da resistência: %lf Ω", s_resistencia); //mostra o resultado na tela

return 0;
}
