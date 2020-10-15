#include <stdio.h>

int main(void) {

int e_interruptor;
int memoria = 0;
//cria uma variável que represente o interruptor e outra de memória que represente a lâmpada

while (1){

printf("\nPressione a tecla 1: "); //istrui o usuário
scanf("%i",&e_interruptor); //lê a variável de entrada

if(e_interruptor == 1){
memoria = 1;
printf("Luz acesa\n"); 
e_interruptor = 0;
}
//apertou o interruptor, memória muda de estado e acende a lâmpada. Para que ela apague somente se pressionar 1 de novo, o interruptor deve voltar a ser 0

printf("\nPressione a tecla 1: ");
scanf("%i",&e_interruptor);
//aperta 1 de novo

if(memoria == 1 && e_interruptor == 1){
memoria = 0;
printf("Luz apagada\n"); 
}
}
//memória muda de estado novamente apagando a lâmpada outra vez

return 0;
}