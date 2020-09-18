#include <stdio.h>

int main(void) {

float e_tempo, e_velocidade, e_posicao_inicial, s_posicao_final; //declara as variáveis

printf("OBS: Os dados a serem aprsentados nos resultados não levam em considerção as unidades"); //alerta para o usuário do programa

scanf("%f",&e_tempo); //lê o valor de tempo

if(e_tempo < 0){
printf("Tempo não pode ser negativo");   
} //verifica se o tempo está em sua condição de existência

else{
printf("instante do movimento: %f\n", e_tempo);

scanf("%f",&e_velocidade); //lê o valor da velocidade

if(e_velocidade == 0){
printf("em MRU, velocidade = 0 não descreve um movimento, já que o corpo permanece parado em todos os instantes");
} //verifica se de fato isso é um movimento


//continua o programa:
else{
printf("velocidade do corpo: %f\n",e_velocidade);

scanf("%f",&e_posicao_inicial);
printf("posição inicial: %f\n",e_posicao_inicial);

s_posicao_final = e_posicao_inicial + e_velocidade*e_tempo; //executa a operação
printf("Posição final do corpo: %f\n",s_posicao_final); //mostra o resultado na tela
}
}

return 0;
}