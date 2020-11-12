#include <stdio.h>
#include <unistd.h>

int main(void) {

int valor1 = 7;
int LED[8];

while(1){
LED[valor1] = 1;

if(valor1 == 7){
for(int valor2 = 0; valor2 < 7; valor2++){
LED[valor2] = 0;  
}
}

if(LED[0] == 1 || LED[1] == 1 || LED[2] == 1 || LED[3] == 1 || LED[4] == 1 || LED[5] == 1 || LED[6] == 1 || LED[7] == 1){

for(int valor3 = 0; valor3 <= 7; valor3++){
printf("%i ",LED[valor3]); 
}
}

printf("\n"); 
LED[valor1] = 0;
valor1--;
sleep(1);

if(valor1 == -1){
valor1 = 7;  
}
}

return 0;
}