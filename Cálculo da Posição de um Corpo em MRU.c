#include <stdio.h>

int main(void) {

double e_tempo, e_velocidade, e_posicao_inicial, s_posicao_final; //declara as variáveis

printf("OBS: Os dados a serem apresentados nos resultados não levam em considerção as unidades \n \n"); //alerta para o usuário do programa

printf("Digite o intante a ser analisado: ");
scanf("%lf",&e_tempo); //lê o valor de tempo

if(e_tempo < 0){
printf("Tempo não pode ser negativo");   
} //verifica se o tempo está em sua condição de existência

else{
printf("Digite a velocidade do corpo: ");
scanf("%lf",&e_velocidade); //lê o valor da velocidade

if(e_velocidade == 0){
printf("Em MRU, velocidade = 0 não descreve um movimento, já que o corpo permanece parado em todos os instantes");
} //verifica se de fato isso é um movimento

else{
double velocidade_em_km_por_hora = e_velocidade*3.6;

if(e_velocidade > 299792458 || velocidade_em_km_por_hora > 1079252848.8){
printf("\nSomente as partículas neutrino conseguem ultrapassar a velocidade da luz - Epecíficamente no meio aquoso. De todo modo, ainda sim essas partículas não excedem essa velocidade em grandes proporções. Se o corpo em movimento estiver no vácuo e não for essa partícula, a velocidade inserida é inválida.");  
}

else{
if(e_velocidade > 277777 || velocidade_em_km_por_hora > 1000000){
printf("\nOberve que um corpo que possua uma velocidade dessas proporções necessáriamente possui uma massa muito pequena, conforme propõe a teria da relatividade");
} //Aplica as constatações propostas por Albert Einstein em sua teoria da relatividade

//continua o programa:
else{
printf("Posição inicial do corpo: ");
scanf("%lf",&e_posicao_inicial);

s_posicao_final = e_posicao_inicial + e_velocidade*e_tempo; //executa a operação
printf("\nPosição final do corpo: %lf",s_posicao_final); //mostra o resultado na tela
}
}
}
}

return 0;
}
