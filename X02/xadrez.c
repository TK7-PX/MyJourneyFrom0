#include <stdio.h>
int main() {

    //valores para bispo e rainha
    int b = 0, r = 0, mc = 0;

    //movimento da torre
    for (int t = 0; t < 5; t++)
    {
        printf("Direita→\n");
    }
       printf("*Torre se mivimentou*\n");
    
    //movimento do bispo
    while (b < 5)
    {
       printf("Cima, Direita↗\n");
       b++;
    }
      printf("*Bispo se movimentou*\n");
    
    //movimento da rainha
    do
    {
       printf("←Esquerda\n");
       r++;
    } while (r < 8);
       printf("*Rainha se movimentou*\n");

    //movimento do cavalo   
    for (int i = 0; i < 1; i++) {

        while (mc < 2)
        {
            printf("Baixo\n");
            mc++;
        }
        
        printf("Esquerda\n");
    }
    
    
      printf("*Cavalo se movimentou*\n");

    return 0;
}
