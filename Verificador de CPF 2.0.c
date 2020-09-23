#include <stdio.h>

int main(void) {

int e_cpf; //declara a variável de entrada: O CPF

scanf("%i",&e_cpf); //lê a variável de entrada

if(e_cpf > 999999999 || e_cpf < 100000000){
printf("CPF inválido: Devem ser inseridos nem mais, nem menos que 9 dígitos no CPF" ); //verifica se o valor inserido é válido
} 

//começa o algoritmo:
else{

printf("CPF digitado: %i\n", e_cpf); //mostra o valor lido na tela em caso de validez

double cpf_decimal = e_cpf; //as operações a seguir devem resultar em valores das casas decimais após a vírgula diferentes de 0 para realizar o programa. Porém os valor lido do CPF DEVE ser inteiro (para não ocorrer erros), e as variáveis a seguir (que necessitam estar em double) só operam quando a variável a ser dividida também estiver em double. Logo, lê-se a entrada em int e após, a converte para o formato double

//Começa-se a execução das operações:
double primeira_divisao_decimal, segunda_divisao_decimal, terceira_divisao_decimal, quarta_divisao_decimal,quinta_divisao_decimal, sexta_divisao_decimal, setima_divisao_decimal ,oitava_divisao_decimal, nona_divisao_decimal;

primeira_divisao_decimal = cpf_decimal/ 10;
segunda_divisao_decimal = cpf_decimal/ 100;
terceira_divisao_decimal = cpf_decimal/ 1000;
quarta_divisao_decimal = cpf_decimal/ 10000;
quinta_divisao_decimal = cpf_decimal/ 100000;
sexta_divisao_decimal = cpf_decimal/ 1000000;
setima_divisao_decimal = cpf_decimal/ 10000000;
oitava_divisao_decimal = cpf_decimal/ 100000000;
nona_divisao_decimal = cpf_decimal/ 1000000000;

int primeira_divisao_inteira, segunda_divisao_inteira, terceira_divisao_inteira, quarta_divisao_inteira, quinta_divisao_inteira, sexta_divisao_inteira, setima_divisao_inteira,oitava_divisao_inteira, nona_divisao_inteira;

primeira_divisao_inteira = e_cpf/ 10;
segunda_divisao_inteira = e_cpf/ 100;
terceira_divisao_inteira = e_cpf/ 1000;
quarta_divisao_inteira = e_cpf/ 10000;
quinta_divisao_inteira = e_cpf/ 100000;
sexta_divisao_inteira = e_cpf/ 1000000;
setima_divisao_inteira = e_cpf/ 10000000;
oitava_divisao_inteira = e_cpf/ 100000000;
nona_divisao_inteira = e_cpf/ 1000000000;
//cada divisao por 10 fará com que a vírgula ande uma casa à esquerda, deslocando-se dígito por dígito para usá-los nas contas posteriores

double primeira_subtracao, segunda_subtracao, terceira_subtracao, quarta_subtracao, quinta_subtracao, sexta_subtracao, setima_subtracao,oitava_subtracao, nona_subtracao;

primeira_subtracao = primeira_divisao_decimal - primeira_divisao_inteira;

segunda_subtracao = segunda_divisao_decimal - segunda_divisao_inteira;

terceira_subtracao = terceira_divisao_decimal - terceira_divisao_inteira;

quarta_subtracao = quarta_divisao_decimal - quarta_divisao_inteira;

quinta_subtracao = quinta_divisao_decimal - quinta_divisao_inteira;

sexta_subtracao = sexta_divisao_decimal - sexta_divisao_inteira;

setima_subtracao = setima_divisao_decimal - setima_divisao_inteira;

oitava_subtracao = oitava_divisao_decimal - oitava_divisao_inteira;

nona_subtracao = nona_divisao_decimal - nona_divisao_inteira;
//subtraindo-se valores decimais por inteiros, sobra uma parcela de um décimo do valor decimal inicial, que será usado em cálculos posteriores

float primeira_operacao, segunda_operacao, terceira_operacao, quarta_operacao, quinta_operacao, sexta_operacao, setima_operacao, oitava_operacao, nona_operacao;

primeira_operacao = primeira_subtracao*10;
segunda_operacao = (segunda_subtracao - (primeira_subtracao/ 10))*10;
terceira_operacao = (terceira_subtracao - (segunda_subtracao/ 10))*10;
quarta_operacao = (quarta_subtracao - (terceira_subtracao/ 10))*10;
quinta_operacao = (quinta_subtracao - (quarta_subtracao/ 10))*10;
sexta_operacao = (sexta_subtracao - (quinta_subtracao/ 10))*10;
setima_operacao = (setima_subtracao - (sexta_subtracao/ 10))*10;
oitava_operacao = (oitava_subtracao - (setima_subtracao/ 10))*10;
nona_operacao = (nona_subtracao - (oitava_subtracao/ 10))*10;
//deletando os dígitos mais a direita de cada dígito a ser verificado e multiplicando esses décimos de valor por 10, cada um desses dígitos se torna um número inteiro, que poderá então ser usado para executar a lógica da verificação de CPF em si

int valorx_1, valorx_2, valorx_3, valorx_4, valorx_5, valorx_6, valorx_7, valorx_8, valorx_9;

valorx_1 = primeira_operacao*2;
valorx_2 = segunda_operacao*3;
valorx_3 = terceira_operacao*4;
valorx_4 = quinta_operacao*5;
valorx_5 = quinta_operacao*6;
valorx_6 = sexta_operacao*7;
valorx_7 = setima_operacao*8;
valorx_8 = oitava_operacao*9;
valorx_9 = nona_operacao*10;
//os valores obtidos são multiplicados pelos seus respectivos pesos

int soma = valorx_1 + valorx_2 + valorx_3 + valorx_4 + valorx_5 + valorx_6 + valorx_7 + valorx_8 + valorx_9;

int divisao_por_onze = soma/ 11;
int variavel_qualquer = divisao_por_onze*11; 
int resto = soma - variavel_qualquer;
//o quociente multiplicado pelo divisor (11) resulta no número que efetuará a subtração do dividendo, obtendo o resto.

int s_digito_x_do_cpf;

if (resto < 2){
s_digito_x_do_cpf = 0;
}

else{
s_digito_x_do_cpf = 11 - resto;
}
// obtém o dígito X do CPF

//Repete o algoritmo - Agora para o dígito Y:
int valory_1, valory_2, valory_3, valory_4, valory_5, valory_6, valory_7, valory_8, valory_9, valory_10;

valory_1 = s_digito_x_do_cpf*2;
valory_2 = primeira_operacao*3;
valory_3 = segunda_operacao*4;
valory_4 = terceira_operacao*5;
valory_5 = quarta_operacao*6;
valory_6 = quinta_operacao*7;
valory_7 = sexta_operacao*8;
valory_8 = setima_operacao*9;
valory_9 = oitava_operacao*10;
valory_10 = nona_operacao*11;

int soma2 = valory_1 + valory_2 + valory_3 + valory_4 + valory_5 + valory_6 + valory_7 + valory_8 +  valory_9 + valory_10;

int divisao_por_onze2 = soma2/ 11;
int variavel_qualquer2 = divisao_por_onze2*11; 
int resto2 = soma2 - variavel_qualquer2;

int s_digito_y_do_cpf;

if (resto2 < 2){
s_digito_y_do_cpf = 0;  
printf("CPF verificado: %i - %i%i\n", e_cpf, s_digito_x_do_cpf, s_digito_y_do_cpf);
}

else{
s_digito_y_do_cpf = 11 - resto2;
printf("CPF verificado: %i - %i%i\n", e_cpf, s_digito_x_do_cpf, s_digito_y_do_cpf);
}
}
// obtém o dígito Y do CPF e mostra o CPF final obtido

return 0;
}