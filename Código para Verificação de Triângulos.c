#include <stdio.h>

int main(void) {

float e_lado1, e_lado2, e_lado3; //declara as variáveis

scanf("%f",&e_lado1); //lê o valor da variável 
printf("lado 1 = %f\n",e_lado1); //mostra o valor do lado 1

//repetir o mesmo processo com as demais variáveis:

scanf("%f",&e_lado2);
printf("lado 2 = %f\n",e_lado2); 
 
scanf("%f",&e_lado3);
printf("lado 3 = %f\n",e_lado3);

//verficar se os valores apresentados resultam de fato em um triângulo conforme a condição de existência:

if(e_lado1 > e_lado2 + e_lado3 || e_lado2 > e_lado1 + e_lado3 || e_lado3 > e_lado1 + e_lado2 || e_lado1 == 0 || e_lado2 ==0 ||e_lado3 ==0){
printf("não é um triâgulo");
}

else{
//Começa a verificar efetivamente os tipos de triângulo:

if(e_lado1 == e_lado2 && e_lado1 == e_lado3){
printf("é um triângulo equilátero");  
}

else{ 
if(e_lado1 == e_lado2 || e_lado1 == e_lado3 || e_lado2 == e_lado3){
printf("é um triângulo isósceles");
}

else{
printf("é um triângulo escaleno");
}
}
}

return 0;
}