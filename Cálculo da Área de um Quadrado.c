#include <stdio.h>
#include <math.h> //declara a biblioteca padrão necessária para o uso da função "pow"

int main(void) {

float e_lado, s_area; //declara as variáveis

scanf("%f",&e_lado); //lê o valor do lado do quadrado
printf("lado do quadrado:%f\n", e_lado); //mostra o valor lido na tela

s_area = pow(e_lado, 2); //executa a operação
printf("area do quadrado:%f\n", s_area); //mostra o resultado na tela

return 0;
}