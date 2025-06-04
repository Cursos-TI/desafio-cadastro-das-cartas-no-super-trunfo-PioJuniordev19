#include <stdio.h>

int main() {
    int idade = 40;
    float altura = 1.78;
    char Letra = 'A';
    char nome1[20] = "Joao";
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", Letra);
    printf("Nome: %s\n", nome1);

    int codigo = 1;
    char letra = 'J';
    char nome2[20] = "Rio";
    int populacao = 1000000;
    float area = 100.5;
    float PIB = 57830.75;
    int pontoTuristico = 5;
    float densidade = 8102.47;
    float PIB_per_capita = 56724.32;
    printf("Codigo: %d\n", codigo);
    printf("Letra: %c\n ", letra);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Ponto Turistico: %d\n", pontoTuristico);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", PIB_per_capita);
    float media = (PIB / populacao);
    printf("Media PIB per capita: %.2f\n", media);
    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade);
    printf("A média PIB per capita é: %.2f\n", PIB_per_capita);
    printf("A população de %s é de %d habitantes.\n", nome2, populacao);
    printf("A área de %s é de %.2f km².\n", nome2, area);
    printf("O PIB de %s é de %.2.f\n", nome2, PIB);
    printf("O ponto turístico mais famoso de %s é o número %d.\n", nome2, pontoTuristico);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", nome2, densidade);
    printf("O PIB per capita de %s é de %.2f.\n", nome2, PIB_per_capita);   
    printf("A média PIB per capita de %s é de %2.f\n", nome2, media);
    printf("A população de %s é de %d habitantes.\n", nome2, populacao);
    printf("A área de %s é de %.2f km².\n", nome2, area);
    printf("O PIB de %s é de %.2f.\n", nome2, PIB);
    printf("O ponto turístico mais famoso de %s é o número %d.\n", nome2, pontoTuristico);
    printf("A densidade populacional de %s é de %.2f habitantes por km².\n", nome2, densidade);
    printf("O PIB per capita de %s é de %.2f.\n", nome2, PIB_per_capita);
    printf("A média PIB per capita de %s é de %.2f.\n", nome2, media);
    printf("A população de %s é de %d habitantes.\n", nome2, populacao);     
    return 0;
}
    