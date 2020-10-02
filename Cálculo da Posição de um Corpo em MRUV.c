#include <stdio.h>
#include <math.h> //declara a biblioteca necessária para o uso da instrução "pow"

int main(void) {

double e_posicao_inicial, e_velocidade_inicial, e_tempo, e_aceleracao, s_posicao_final; //declara as variáveis

printf("ATENÇÃO: Os valores a serem apresentados não levam em consideração as unidades \n \n"); //alerta para o usuário do programa

printf("Digite o instante do movimento a ser analisado: ");
scanf("%lf",&e_tempo); //Lê a entrada de tempo

if(e_tempo < 0){
printf("Tempo não pode ser negativo"); 
} //verifica se a variável tempo está em sua condição de existência

else{
printf("Digite a aceleração do corpo em questão: ");
scanf("%lf",&e_aceleracao);

if(e_aceleracao == 0){
printf("Isso não é um MRUV");  
} //verifica se de fato o corpo está em MRUV

else{
printf("Digite a velocidade inicial do corpo: ");
scanf("%lf",&e_velocidade_inicial);

double velocidade_em_km_por_hora = e_velocidade_inicial*3.6;

if(e_velocidade_inicial > 299792458 || velocidade_em_km_por_hora > 1079252848.8){
printf("\nSomente as partículas neutrino conseguem ultrapassar a velocidade da luz - Epecíficamente no meio aquoso. De todo modo, ainda sim essas partículas não excedem essa velocidade em grandes proporções. Se o corpo em movimento estiver no vácuo e não for essa partícula, a velocidade inserida é inválida.");  
}

else{
if(e_velocidade_inicial > 277777 || velocidade_em_km_por_hora > 1000000){
printf("\nOberve que um corpo que possua uma velocidade dessas proporções necessáriamente possui uma massa muito pequena, conforme propõe a teria da relatividade");
} //Aplica as constatações propostas por Albert Einstein em sua teoria da relatividade

else{
printf("Digite a posição inicial do corpo: ");
scanf("%lf",&e_posicao_inicial);

s_posicao_final = e_posicao_inicial + e_velocidade_inicial*e_tempo + 
((e_aceleracao*pow(e_tempo, 2))/ 2); //executa a operação
printf("\nPosição final do corpo: %lf", s_posicao_final); //mostra o resultado na tela
}
}
}
}

return 0;
}
