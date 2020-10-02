#include <stdio.h>

int main(void) {

int e_digito1, e_digito2, e_digito3, e_digito4, e_digito5, e_digito6,e_digito7, e_digito8, e_digito9; //declara as variáveis de entrada 

int valorx_1, valorx_2, valorx_3, valorx_4, valorx_5, valorx_6, valorx_7, valorx_8, valorx_9;

int soma;
//declara as variáveis que estarão em função das variáveis de entrada 

//começa o algoritmo:
printf("Inisra o primeiro dígito:");
scanf("%i",&e_digito1);
valorx_1 = e_digito1*10;

printf("Inisra o segundo dígito: ");
scanf("%i",&e_digito2);
valorx_2 = e_digito2*9;

printf("Inisra o terceiro dígito: ");
scanf("%i",&e_digito3);
valorx_3 = e_digito3*8;

printf("Inisra o quarto dígito: ");
scanf("%i",&e_digito4);
valorx_4 = e_digito4*7;

printf("Inisra o quinto dígito: ");
scanf("%i",&e_digito5);
valorx_5 = e_digito5*6;

printf("Inisra o sexto dígito: ");
scanf("%i",&e_digito6);
valorx_6 = e_digito6*5;

printf("Inisra o sétimo dígito: ");
scanf("%i",&e_digito7);
valorx_7 = e_digito7*4;

printf("Inisra o oitavo dígito: ");
scanf("%i",&e_digito8);
valorx_8 = e_digito8*3;

printf("Inisra o nono dígito: ");
scanf("%i",&e_digito9);
valorx_9 = e_digito9*2;

soma = valorx_1 + valorx_2 + valorx_3 + valorx_4 + valorx_5 + valorx_6 + valorx_7 + valorx_8 +  valorx_9;
//realiza as multiplicações dos valores digitados e a soma desses

int resto = soma % 11;
int s_digito_x_do_cpf;

if (resto < 2){
s_digito_x_do_cpf = 0;
}

else{
s_digito_x_do_cpf = 11 - resto; 
}
// obtém o dígito X do CPF

//Repete o algoritmo - Agora para o dígito Y
int valory_1, valory_2, valory_3, valory_4, valory_5, valory_6, valory_7, valory_8, valory_9, valory_10;

int soma2;

valory_1 = e_digito1*11;
valory_2 = e_digito2*10;
valory_3 = e_digito3*9;
valory_4 = e_digito4*8;
valory_5 = e_digito5*7;
valory_6 = e_digito6*6;
valory_7 = e_digito7*5;
valory_8 = e_digito8*4;
valory_9 = e_digito9*3;
valory_10 = s_digito_x_do_cpf*2;

soma2 = valory_1 + valory_2 + valory_3 + valory_4 + valory_5 + valory_6 + valory_7 + valory_8 +  valory_9 + valory_10;
 
int resto2 = soma2 % 11;
int s_digito_y_do_cpf;

if (resto2 < 2){
s_digito_y_do_cpf = 0; 
printf("\nCPF verificado: %i%i%i%i%i%i%i%i%i - %i%i",e_digito1, e_digito2, e_digito3, e_digito4, e_digito5, e_digito6, e_digito7, e_digito8, e_digito9, s_digito_x_do_cpf, s_digito_y_do_cpf);
}

else{
s_digito_y_do_cpf = 11 - resto2;
printf("\nCPF verificado: %i%i%i%i%i%i%i%i%i - %i%i",e_digito1, e_digito2, e_digito3, e_digito4, e_digito5, e_digito6, e_digito7, e_digito8, e_digito9, s_digito_x_do_cpf, s_digito_y_do_cpf);
}
// obtém o dígito Y do CPF

  return 0;
}
