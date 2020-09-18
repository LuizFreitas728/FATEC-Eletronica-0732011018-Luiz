#include <stdio.h>

int main(void) {

int e_digito1, e_digito2, e_digito3, e_digito4, e_digito5, e_digito6,e_digito7, e_digito8, e_digito9; //declara as variáveis de entrada 

int valorx_1, valorx_2, valorx_3, valorx_4, valorx_5, valorx_6, valorx_7, valorx_8, valorx_9;

int soma;
//declara as variáveis que estarão em função das variáveis de entrada 

//começa o algoritmo:
scanf("%i",&e_digito1);
valorx_1 = e_digito1*10;
printf("primeiro valor de entrada para o dígito x: %d\n", valorx_1);

scanf("%i",&e_digito2);
valorx_2 = e_digito2*9;
printf("segundo valor de entrada para o dígito x: %d\n", valorx_2);

scanf("%i",&e_digito3);
valorx_3 = e_digito3*8;
printf("terceiro de entrada para o dígito x: %d\n", valorx_3);

scanf("%i",&e_digito4);
valorx_4 = e_digito4*7;
printf("quarto de entrada para o dígito x: %d\n", valorx_4);

scanf("%i",&e_digito5);
valorx_5 = e_digito5*6;
printf("quinto valor de entrada para o dígito x: %d\n", valorx_5);

scanf("%i",&e_digito6);
valorx_6 = e_digito6*5;
printf("sexto valor de entrada para o dígito x: %d\n", valorx_6);

scanf("%i",&e_digito7);
valorx_7 = e_digito7*4;
printf("sétimo valor de entrada para o dígito x: %d\n", valorx_7);

scanf("%i",&e_digito8);
valorx_8 = e_digito8*3;
printf("oitavo valor de entrada para o dígito x: %d\n", valorx_8);

scanf("%i",&e_digito9);
valorx_9 = e_digito9*2;
printf("nono valor de entrada para o dígito x: %d\n", valorx_9);

soma = valorx_1 + valorx_2 + valorx_3 + valorx_4 + valorx_5 + valorx_6 + valorx_7 + valorx_8 +  valorx_9;
printf("soma dos valores para o dígito X: %d\n", soma);
//realiza as multiplicações dos valores digitados e a soma desses e as mostra na tela

int divisao_por_onze;
divisao_por_onze = soma/11;
//int declara variáveis que podem somente assumir valores inteiros, conforme foi dito que era necessário. Portanto, o resultado da divisão acima não resultará em um número que não pertença ao conjunto dos naturais

int variavel_qualquer;
variavel_qualquer = divisao_por_onze*11; 
int resto = soma - variavel_qualquer;
printf("resto: %d\n", resto);
//o quociente multiplicado pelo divisor (11) resulta no número que efetuará a subtração do dividendo, obtendo o resto.

int s_digito_x_do_cpf;

if (resto < 2){
s_digito_x_do_cpf = 0;
printf("o dígito X: %d\n",s_digito_x_do_cpf);  
}

else{
s_digito_x_do_cpf = 11 - resto;
printf("o dígito X: %d\n",s_digito_x_do_cpf);  
}
// obtém o dígito X do CPF

//Repete o algoritmo - Agora para o dígito Y
int valory_1, valory_2, valory_3, valory_4, valory_5, valory_6, valory_7, valory_8, valory_9, valory_10;

int soma2;

valory_1 = e_digito1*11;
printf("primeiro valor para o dígito Y: %d\n", valory_1);

valory_2 = e_digito2*10;
printf("segundo valor para o dígito Y: %d\n", valory_2);

valory_3 = e_digito3*9;
printf("terceiro valor para o dígito Y: %d\n", valory_3);

valory_4 = e_digito4*8;
printf("quarto valor para o dígito Y: %d\n", valory_4);

valory_5 = e_digito5*7;
printf("quinto valor para o dígito Y: %d\n", valory_5);

valory_6 = e_digito6*6;
printf("sexto valor para o dígito Y: %d\n", valory_6);

valory_7 = e_digito7*5;
printf("sétimo valor para o dígito Y: %d\n", valory_7);

valory_8 = e_digito8*4;
printf("oitavo valor para o dígito Y: %d\n", valory_8);

valory_9 = e_digito9*3;
printf("nono valor para o dígito Y: %d\n", valory_9);

valory_10 = s_digito_x_do_cpf*2;
printf("décimo valor para o dígito Y: %d\n", valory_10);

soma2 = valory_1 + valory_2 + valory_3 + valory_4 + valory_5 + valory_6 + valory_7 + valory_8 +  valory_9 + valory_10;
printf("soma dos valores para o dígito Y: %d\n", soma2);

int divisao_por_onze2;
divisao_por_onze2 = soma2/11;

int variavel_qualquer2;
variavel_qualquer2 = divisao_por_onze2*11; 
int resto2 = soma2 - variavel_qualquer2;
printf("resto: %d\n", resto2);

int s_digito_y_do_cpf;

if (resto2 < 2){
s_digito_y_do_cpf = 0;
printf("o dígito Y: %d\n",s_digito_y_do_cpf);  
}

else{
s_digito_y_do_cpf = 11 - resto2;
printf("o dígito Y: %d\t",s_digito_y_do_cpf);  
}
// obtém o dígito Y do CPF

  return 0;
}