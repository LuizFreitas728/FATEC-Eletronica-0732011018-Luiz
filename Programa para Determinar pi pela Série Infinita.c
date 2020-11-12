#include <stdio.h>

int main(void) {
float e_numero, n_termos, valor1, valor2, resultado1, resultado2, resultado3, pi1, pi2, s_pi;
int memoria = 0;

printf("Digite um número: ");
scanf("%f",&e_numero);

n_termos = e_numero;

while(memoria <= e_numero){ 
valor1 = (n_termos*2) - 1;
resultado1 = 1/ valor1;
pi1 = pi1 - resultado1; 
printf("\nNúmero1: %f", pi1);

valor2 = (n_termos - 1)*2 - 1;
resultado2 = 1/ valor2;
pi2 = pi2 + resultado2;
printf("\nNúmero2: %f", pi2);

resultado3 = pi1 + pi2;
printf("\nNúmero3: %f", resultado3);

s_pi = s_pi + resultado3;
printf("\nPor fim: %f\n", s_pi);

n_termos = n_termos-2;
memoria++;
}

printf("\nNúmero pi: %f", s_pi);

return 0;
}