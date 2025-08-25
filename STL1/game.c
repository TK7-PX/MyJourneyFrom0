#include <stdio.h>

int main() {
    // dados gerais
    char Estado1[50], Codigo1[3], Cidade1[50];
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1;
    float Densidade1, PIBperCapita1;

    //dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Código:\n");
    scanf("%s", Codigo1);
    printf("Estado:\n");
    scanf("%s", Estado1);
    printf("Cidade:\n");
    scanf("%s", Cidade1);
    printf("População:\n");
    scanf("%d", &Populacao1);
    printf("Pontos turísticos:\n");
    scanf("%d", &PontosTuristicos1);
    printf("Área:\n");
    scanf("%f", &Area1);
    printf("PIB:\n");
    scanf("%f", &PIB1);

    Densidade1 = Populacao1 / Area1;
    PIBperCapita1 = PIB1 / Populacao1;

    // exibindo densidade e pib 
    printf("\n=== Carta 1 ===\n");
    printf("Densidade Populacional: %.2f\n", Densidade1);
    printf("PIB per capita: R$ %.2f\n", PIBperCapita1);

    // dados da segunda carta
    char Estado2[50], Codigo2[3], Cidade2[50];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;
    float Densidade2, PIBperCapita2;

    printf("\nDigite os dados da segunda carta:\n");
    printf("Código:\n");
    scanf("%s", Codigo2);
    printf("Estado:\n");
    scanf("%s", Estado2);
    printf("Cidade:\n");
    scanf("%s", Cidade2);
    printf("População:\n");
    scanf("%d", &Populacao2);
    printf("Pontos turísticos:\n");
    scanf("%d", &PontosTuristicos2);
    printf("Área:\n");
    scanf("%f", &Area2);
    printf("PIB:\n");
    scanf("%f", &PIB2);

    Densidade2 = Populacao2 / Area2;
    PIBperCapita2 = PIB2 / Populacao2;

    //exibindo densidade e pib 2
    printf("\n=== Carta 2 ===\n");
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB per capita: R$ %.2f\n", PIBperCapita2);

    //comparando população

    if(Populacao1>Populacao2){
        printf("Carta 1 ganhou");
    } else {
        printf("Carta 2 ganhou");
    }

//comparando densidade

    if(Populacao1<Populacao2){
        printf("Carta 1 ganhou");
    } else {
        printf("Carta 2 ganhou");
    }

    return 0;
}