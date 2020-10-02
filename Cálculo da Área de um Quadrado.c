#include <stdio.h>
#include <math.h> //declara a biblioteca padrão necessária para o uso da função "pow"

int main(void) {

float e_lado, s_area; //declara as variáveis

printf("Digite o valor do lado do quadrado: ");//intrução para o usuário
scanf("%f",&e_lado); //lê o valor do lado do quadrado

s_area = pow(e_lado, 2); //executa a operação
printf("\nÁrea do quadrado: %f\n", s_area); //mostra o resultado na tela

return 0;
}
