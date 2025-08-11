#include <stdio.h>
#include <string.h>

//estrutura que armazena dados das cartas
struct Carta
{
    char Codigo [5];
    char Estado;
    char Nome [15];
    unsigned long int Populacao;
    float Area;
    double PIB;
    int PontosTuristicos;
    float DensidadePopulacional;
    float PIBperCapita; 
    float SuperPoder;

};

int main() {
    //armazenando o valor das cartas
    struct Carta cartas[2] = {
    {"A01",'A', "Florianópolis", 537211, 674.844, 21.31244673, 50, 537.211/674.844, 21.31244673/537.211,537211+674.844+21.31244673+50+21.31244673/537.211},
    {"B01", 'B', "Manaus", 2279686, 11.401092, 103.281436041, 30, 2.279686/11.401092, 103.281436041/2.279686, 2279686+11.401092+103.281436041+30+103.281436041/2.279686}
    };
    
 char CodigoCarta[5];
 printf("Digite o código da carta: ");
 scanf("%s", CodigoCarta);

 int achou = 0;

    // Procurar pela carta
    for (int i = 0; i < 4; i++) {
        if (strcmp(cartas[i].Codigo, CodigoCarta) == 0) {
            printf("\nCarta encontrada:\n");
            printf("estado: %c\n", cartas[i].Estado);
            printf("nome: %s\n", cartas[i].Nome);
            printf("População: %lu\n", cartas[i].Populacao);
            printf("área: %f\n", cartas[i].Area);
            printf("pib: %f\n", cartas[i].PIB);
            printf("Pontos Turísticos: %d\n", cartas[i].PontosTuristicos);
            printf("Densidade Populacional: %f\n", cartas[i].DensidadePopulacional);
            printf("PIB per Capita: %f\n", cartas[i].PIBperCapita);
            printf("Super Poder: %.2f\n", cartas[i].SuperPoder);
            achou = 1;
            break;
        }
    }

    if (!achou) {
        printf("Código não encontrado.\n");
    }

    // Comparar os requisitos
    printf("\n---- Comparação dos Requisitos ----\n");

    // População
    if (cartas[0].Populacao > cartas[1].Populacao)
        printf("População: A vence (mais populosa)\n");
    else
        printf("População: B vence (mais populosa)\n");

    // Área
    if (cartas[0].Area > cartas[1].Area)
        printf("Área: A vence (maior área)\n");
    else
        printf("Área: B vence (maior área)\n");

    // PIB
    if (cartas[0].PIB > cartas[1].PIB)
        printf("PIB: A vence (maior PIB)\n");
    else
        printf("PIB: B vence (maior PIB)\n");

    // Pontos Turísticos
    if (cartas[0].PontosTuristicos > cartas[1].PontosTuristicos)
        printf("Pontos Turísticos: A vence (mais pontos turísticos)\n");
    else
        printf("Pontos Turísticos: B vence (mais pontos turísticos)\n");

    // Densidade Populacional (menor vence)
    if (cartas[0].DensidadePopulacional < cartas[1].DensidadePopulacional)
        printf("Densidade Populacional: A vence (menor densidade)\n");
    else
        printf("Densidade Populacional: B vence (menor densidade)\n");

    // PIB per Capita
    if (cartas[0].PIBperCapita > cartas[1].PIBperCapita)
        printf("PIB per Capita: A vence\n");
    else
        printf("PIB per Capita: B vence\n");

    // Super Poder
    if (cartas[0].SuperPoder > cartas[1].SuperPoder)
        printf("Super Poder: A vence\n");
    else
        printf("Super Poder: B vence\n");

 return 0;
}