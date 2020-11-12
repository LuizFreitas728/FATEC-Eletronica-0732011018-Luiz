#include <stdio.h>

int funcao();

int funcao (int numero){
int fatorial = 1;

if(numero > 1){
int valor = numero;

while(valor > 1){
fatorial = fatorial * valor;
valor--;
}
} 

return fatorial;
} //declara a função de número fatorial

int main(void) {

int e_numero, n_termos;
double resultado, valor, s_euler;
int memoria = 0;
//declara as variáveis

printf("Insira um número: ");//instrui o usuário
scanf("%d",&e_numero);//lê a variável

n_termos = e_numero; //declara uma variável com o mesmo valor de entrada não fixo

while(memoria < e_numero){ 
valor = funcao(n_termos - 1);
resultado = 1/ valor;
s_euler = s_euler + resultado;
//realiza as operações

n_termos--;
memoria++;
//conta as execuções feitas
}

printf("\nNúmero de euler: %lf ",s_euler);
//mostra o resultado final na tela

return 0;
}