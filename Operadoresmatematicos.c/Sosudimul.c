#include <stdio.h>

int main() {
/*   
soma (+)
subtracao (-)
multiplicacao (*)
divisao (/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao , divisao;

printf("Entre com o numero1: ");
scanf("%d", &numero1);
printf("Entre com o numero2: ");
scanf("%d", &numero2);

//operacao soma
soma = numero1 + numero2;

//operacao subtracao
subtracao = numero1 - numero2;

//operaçao multiplicacao
multiplicacao = numero1 * numero2;

//operaçao divisao
divisao = numero1 / numero2;

printf("Soma e: %d\n", soma);
printf("Subtracao e: %d\n", subtracao);
printf("Multiplicacao e: %d\n", multiplicacao);
printf("Divisao e: %d\n", divisao);
}