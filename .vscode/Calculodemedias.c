#include <stdio.h>
int main() {
    float nota1,nota2 , nota3;
     float media;

    printf("***Programa de Cálculo de Médias***\n");
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
   
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
   
    printf("Digite a sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;   
    
    printf("A média é: %2.f", media );

    return 0;
}

    