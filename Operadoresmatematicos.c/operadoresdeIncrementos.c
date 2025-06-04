#include <stdio.h>

int main() { 
/* 
 Incremento (++)
 Pré-Incremento (++a)
 Pós-Incremento (a++)   
 Decremento (--) 
 Pré-Decremento --a
 Pós-Decremento a--
 */
    
 int numero1 = 1, resultado;

printf("Antes incremento: %d\n", numero1);
//numero1 = numero1 - 1;
//numero1 -= 1;
//numero--;

//printf("Apos decremento: %d\n", numero1);
resultado  = numero1--;
printf("Depois pos - decremento - numero 1:  %d\n",numero1);
resultado = --numero1;
printf("Depois do pre-decremento - Numero 1: %d\n", resultado);


}