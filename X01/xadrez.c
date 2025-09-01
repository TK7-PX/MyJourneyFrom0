#include <stdio.h>
int main() {

    int b = 0, r = 0;

    for (int t = 0; t < 5; t++)
    {
        printf("Direita→\n");
    }
    
    while (b < 5)
    {
       printf("Cima, Direita↗\n");
       b++;
    }
    
    do
    {
       printf("←Esquerda\n");
       r++;
    } while (r < 8);
    

    return 0;
}
