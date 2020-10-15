#include <stdio.h>

int main(void) {

int e_numero, valor1, valor2;

printf("Digite um número qualquer: ");
scanf("%i",&e_numero);

if(e_numero > 1){
valor1 = 2;
valor2 = 0;

while(valor1 < e_numero){
if((e_numero % valor1) == 0){
valor2++;
}  

valor1++;
}

if(valor2 == 0){
printf("\nÉ primo");  
}

else{
printf("\nNão é primo");  
}
}

else{
printf("\nErro");
}

return 0;
}