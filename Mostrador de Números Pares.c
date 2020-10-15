#include <stdio.h>

int main(void) {

int e_numero, valor, resto; 
int memoria = 0;
//introduz as variáveis

printf("Digite um número qualquer: "); //instrui o usuário
scanf("%i",&e_numero); //lê a variável

valor = e_numero; //atribui a essa variável o valor de entrada de modo que ele poderá não ser fixo

while (memoria <= e_numero){

resto = valor % 2; //um número é par se sua divisão por 2 der 0 no resto

memoria ++;  //conta quantas vezes foi feita uma execução

if(resto == 0){
printf("%i ",valor);  
} //se for par, o número é mostrado na tela

valor --;
} //subtrai em 1 a variável valor para recomeçar o proceso

return 0;
}