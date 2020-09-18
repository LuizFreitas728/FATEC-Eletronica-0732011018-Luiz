#include <stdio.h>
#include <math.h> //declara a biblioteca necessária para o uso da instrução "pow"

int main(void) {

float e_posicao_inicial, e_velocidade_inicial, e_tempo, e_aceleracao, s_posicao_final; //declara as variáveis

printf("Os valores a serem apresentados não levam em consideração as unidades"); //alerta para o usuário do programa

scanf("%f",&e_tempo); //Lê a entrada de tempo

if(e_tempo < 0){
printf("Tempo não pode ser negativo"); 
} //verifica se a variável tempo está em sua condição de existência

else{
printf("Instante do movimento: %f\n", e_tempo);

scanf("%f",&e_aceleracao);

if(e_aceleracao == 0){
printf("Isso não é um MRUV");  
} //verifica se de fato o corpo está em MRUV

else{
printf("Aceleração do corpo: %f\n",e_aceleracao);
//introduz e mostra na tela outros valores: 

scanf("%f",&e_posicao_inicial);
printf("Posição inicial do corpo: %f\n",e_posicao_inicial);

scanf("%f",&e_velocidade_inicial);
printf("Velocidade inicial do corpo: %f\n",e_velocidade_inicial);

s_posicao_final = e_posicao_inicial + e_velocidade_inicial*e_tempo + 
((e_aceleracao*pow(e_tempo, 2))/ 2); //executa a operação
printf("Posição final do corpo: %f\n", s_posicao_final); //mostra o resultado na tela
}
}

return 0;
}