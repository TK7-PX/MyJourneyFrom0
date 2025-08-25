#include <stdio.h>

int main() {
    // dados gerais
    char Estado1[50], Codigo1[3], Cidade1[50], Estado2[50], Codigo2[3], Cidade2[50];
    int Populacao1, PontosTuristicos1, Populacao2, PontosTuristicos2;
    float Area1, PIB1, Area2, PIB2;
    float Densidade1, PIBperCapita1, Densidade2, PIBperCapita2;
    int escolha, escolha2;

    //exibindo os dados 
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

    //cálculo
    Densidade1 = Populacao1 / Area1;
    PIBperCapita1 = PIB1 / Populacao1;

    // exibindo densidade e pib 
    printf("\n=== Carta 1 ===\n");
    printf("Densidade Populacional: %.2f\n", Densidade1);
    printf("PIB per capita: R$ %.2f\n", PIBperCapita1);

    //exibindo os dados
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
    
    //cálculo
    Densidade2 = Populacao2 / Area2;
    PIBperCapita2 = PIB2 / Populacao2;

    //exibindo densidade e pib 2
    printf("\n=== Carta 2 ===\n");
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB per capita: R$ %.2f\n", PIBperCapita2);

    //loop de comparação
    do {
        // escolhendo o atributo
        printf("\nEscolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Pontos Turísticos\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Densidade\n");
        printf("6 - PIBperCapita\n");
        printf("7 - Comparar 2 atributos\n");
        printf("0 - Sair do programa\n");
        printf("Digite sua escolha:\n");
        scanf("%d", &escolha);

        //exibindo resultados da comparação
        switch (escolha) {
            case 1:
                printf("\nComparando População:\n");
                printf("%s: %d  vs  %s: %d\n", Cidade1, Populacao1, Cidade2, Populacao2);
                if (Populacao1 > Populacao2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade1);
                else if (Populacao1 < Populacao2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 2:
                printf("\nComparando Turismo:\n");
                printf("%s: %d  vs  %s: %d\n", Cidade1, PontosTuristicos1, Cidade2, PontosTuristicos2);
                if (PontosTuristicos1 > PontosTuristicos2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade1);
                else if (PontosTuristicos1 < PontosTuristicos2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 3:
                printf("\nComparando Área:\n");
                printf("%s: %f  vs  %s: %f\n", Cidade1, Area1, Cidade2, Area2);
                if (Area1 > Area2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade1);
                else if (Area1 < Area2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 4:
                printf("\nComparando PIB:\n");
                printf("%s: %f  vs  %s: %f\n", Cidade1, PIB1, Cidade2, PIB2);
                if (PIB1 > PIB2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade1);
                else if (PIB1 < PIB2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 5:
                printf("\nComparando Densidade:\n");
                printf("%s: %f  vs  %s: %f\n", Cidade1, Densidade1, Cidade2, Densidade2);
                if (Densidade1 < Densidade2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade1);
                else if (Densidade1 > Densidade2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 6:
                printf("\nComparando PIB per capita:\n");
                printf("%s: %f  vs  %s: %f\n", Cidade1, PIBperCapita1, Cidade2, PIBperCapita2);
                if (PIBperCapita1 > PIBperCapita2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade1);
                else if (PIBperCapita1 < PIBperCapita2)
                    printf("Resultado: Parabéns, %s venceu!\n", Cidade2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 7: {
                printf("\nVocê escolheu comparar dois atributos.\n");
                printf("Digite os dois atributos que deseja comparar (1 a 6), separados por espaço:\n");
                scanf("%d %d", &escolha, &escolha2);

                int vitorias1 = 0, vitorias2 = 0;

                // Função comparar cada atributo
                for (int i = 0; i < 2; i++) {
                    int atual = (i == 0) ? escolha : escolha2;

                    switch (atual) {
                        case 1:
                            if (Populacao1 > Populacao2)
                                vitorias1++;
                            else if (Populacao2 > Populacao1)
                                vitorias2++;
                                printf("%s: %d  vs  %s: %d\n", Cidade1, Populacao1, Cidade2, Populacao2);
                            break;
                        case 2:
                            if (PontosTuristicos1 > PontosTuristicos2)
                                vitorias1++;
                            else if (PontosTuristicos2 > PontosTuristicos1)
                                vitorias2++;
                            printf("%s: %d  vs  %s: %d\n", Cidade1, PontosTuristicos1, Cidade2, PontosTuristicos2);
                            break;
                        case 3:
                            if (Area1 > Area2)
                                vitorias1++;
                            else if (Area2 > Area1)
                                vitorias2++;
                                printf("%s: %f  vs  %s: %f\n", Cidade1, Area1, Cidade2, Area2);
                            break;
                        case 4:
                            if (PIB1 > PIB2)
                                vitorias1++;
                            else if (PIB2 > PIB1)
                                vitorias2++;
                                printf("%s: %f  vs  %s: %f\n", Cidade1, PIB1, Cidade2, PIB2);
                            break;
                        case 5:
                            if (Densidade1 < Densidade2)
                                vitorias1++;
                            else if (Densidade2 < Densidade1)
                                vitorias2++;
                                printf("%s: %f  vs  %s: %f\n", Cidade1, Densidade1, Cidade2, Densidade2);
                            break;
                        case 6:
                            if (PIBperCapita1 > PIBperCapita2)
                                vitorias1++;
                            else if (PIBperCapita2 > PIBperCapita1)
                                vitorias2++;
                                printf("%s: %f  vs  %s: %f\n", Cidade1, PIBperCapita1, Cidade2, PIBperCapita2);
                            break;
                        default:
                            printf("Atributo inválido: %d\n", atual);
                            break;
                    }
                }

                // Exibir o resultado final
                printf("\nResultado da comparação de dois atributos:\n");
                if (vitorias1 > vitorias2)
                    printf("Parabéns, %s venceu por %d a %d!\n", Cidade1, vitorias1, vitorias2);
                else if (vitorias2 > vitorias1)
                    printf("Parabéns, %s venceu por %d a %d!\n", Cidade2, vitorias2, vitorias1);
                else
                    printf("Resultado: Empate (%d a %d)!\n", vitorias1, vitorias2);
                break;
            }

            case 0:
                printf("\nEncerrando o programa. \nAté mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (escolha != 0);

    return 0;
}