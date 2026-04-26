#include <stdio.h>
#include <windows.h>
int main() {
  SetConsoleOutputCP(65001); // Configura a saída do console para UTF-8

//   mover a torre 5 casas para a direita

for (int t = 0; t < 5; t++) {
    printf("Torre move uma casa a Direita.\n");
} 

//  mover o bispo 5 casas na diagonal para cima à direita

int b = 1;
    while (b <= 5) { 
        printf("Bispo move uma casa para cima.\n", b);
        printf("Bispo move uma casa à direita.\n", b); 
        b++; 
    }

// mover rainga oito casas para esquerda

int rainha;

do {
        printf("Rainha move uma casa à esquerda.\n");         
        rainha++;

    } while (rainha <= 8);

  return 0;
}