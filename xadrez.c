#include <stdio.h>

//movimento da torre
int Torre(int Casas) {
    if (Casas > 0) {
      printf("Direita\n");
      Torre (Casas - 1);
    }
    

   } 

   //movimento da rainha
   int Rainha(int Casas) {
    if (Casas > 0) {
      printf("Esquerda\n");
      Rainha (Casas - 1);
    
    }
   
   }

     //movimento do bispo recursividade + loop
   void Bispo(int Casas) {
    if (Casas <= 0) return;

    for (int C = 0; C < 1; C++) {
        printf("Cima\n");

        int D = 0;
        while (D < 1) {
            printf("Direita\n");
            D++;
        }
    }

    Bispo(Casas - 1);  // Chamada recursiva
}
   

 int main (){
     Torre(5); //declara número de casas
     printf("Torre se moveu\n");
     Rainha(8);
     printf("Rainha se moveu\n");
     Bispo (3);
     printf("Bispo se moveu\n");

     int mc = 0;
    for (int i = 0; i < 1; i++) {

        while (mc < 2)
        {
            printf("Cima\n");
            mc++;
        }
        
        printf("Direita\n");
    }
     printf("Cavalo se moveu\n");
     return 0;

 }   
