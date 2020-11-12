#include <stdio.h>

int main(void) {

int e_cpf[9]; 
int soma;

printf("Digite os números do seu CPF, um por vez (enviando com a tecla ENTER):\n");

for(int valor1 = 0; valor1 < 9; valor1++){  
scanf("%i",&e_cpf[valor1]);
}

int e_cpf2[9];
int e_cpf3[10];

for(int valor2 = 0; valor2 < 9; valor2++){
e_cpf2[valor2] = e_cpf[valor2];
e_cpf3[valor2] = e_cpf[valor2];
}

int multiplicador = 10;

for(int valor3 = 0; valor3 < 9; valor3++){ 
e_cpf[valor3] = e_cpf[valor3]*multiplicador;
multiplicador--;
}
 
soma = e_cpf[0] + e_cpf[1] + e_cpf[2] + e_cpf[3] + e_cpf[4] + e_cpf[5] + e_cpf[6] + e_cpf[7] + e_cpf[8];

int resto = soma % 11;
int s_digito_x_do_cpf;

if (resto < 2){
s_digito_x_do_cpf = 0;
}

else{
s_digito_x_do_cpf = 11 - resto; 
}

multiplicador = 11;

for(int valor4 = 0; valor4 < 9; valor4++){
e_cpf3[valor4] = e_cpf3[valor4]*multiplicador;
multiplicador--;
}

e_cpf3[9] = s_digito_x_do_cpf*2;

int soma2 = e_cpf3[0] + e_cpf3[1] + e_cpf3[2] + e_cpf3[3] + e_cpf3[4] + e_cpf3[5] + e_cpf3[6] + e_cpf3[7] + e_cpf3[8] + e_cpf3[9];

int resto2 = soma2 % 11;
int s_digito_y_do_cpf;

if (resto2 < 2){
s_digito_y_do_cpf = 0;
printf("\nCPF obtido: %i%i%i%i%i%i%i%i%i - %i%i\n\n", e_cpf2[0], e_cpf2[1], e_cpf2[2], e_cpf2[3], e_cpf2[4], e_cpf2[5], e_cpf2[6], e_cpf2[7], e_cpf2[8], s_digito_x_do_cpf, s_digito_y_do_cpf);
}

else{
s_digito_y_do_cpf = 11 - resto2; 
printf("\nCPF obtido: %i%i%i%i%i%i%i%i%i - %i%i\n\n", e_cpf2[0], e_cpf2[1], e_cpf2[2], e_cpf2[3], e_cpf2[4], e_cpf2[5], e_cpf2[6], e_cpf2[7], e_cpf2[8], s_digito_x_do_cpf, s_digito_y_do_cpf);
}

printf("Digite os últimos 2 dígitos:\n");

int penultimo_digito, ultimo_digito;
scanf("%i",&penultimo_digito);
scanf("%i",&ultimo_digito);

if (penultimo_digito == s_digito_x_do_cpf && ultimo_digito == s_digito_y_do_cpf){
printf("o CPF apresentado é válido");
} 

else{
printf("o CPF inserido é inválido");
}
 
return 0;
}