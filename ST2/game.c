#include <stdio.h>
#include <string.h>

//estrutura quq armazena dados das cartas
struct Carta
{
    char Codigo [5];
    char Estado;
    char Nome [15];
    float Populacao;
    float Area;
    double PIB;
    int PontosTuristicos;
    float DensidadePopulacional;
    float PIBperCapita; 

};

int main() {
    //criando cartas
    struct Carta cartas[2] = {
    {"A01",'A', "Florianópolis", 537.211, 674.844, 21.31244673, 50, 537.211/674.844, 21.31244673/537.211}, 
    {"B01", 'B', "Manaus", 2.279686, 11.401092, 103.281436041, 30, 2.279686/11.401092, 103.281436041/2.279686}
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
            printf("População: %f\n", cartas[i].Populacao);
            printf("área: %f\n", cartas[i].Area);
            printf("pib: %f\n", cartas[i].PIB);
            printf("Pontos Turísticos: %d\n", cartas[i].PontosTuristicos);
            printf("Densidade Populacional: %f\n", cartas[i].DensidadePopulacional);
            printf("PIB per Capita: %f\n", cartas[i].PIBperCapita);
            achou = 1;
            break;
        }
    }

    if (!achou) {
        printf("Código não encontrado.\n");
    }

 return 0;
}