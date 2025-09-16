#include <stdio.h>

int main() {
    
    int tabuleiro[5][5] = {0};

    
    int linha_inicio_vertical = 0;
    int coluna_vertical = 2;
    int tamanho_vertical = 3;

    int linha_horizontal = 4;
    int coluna_inicio_horizontal = 1;
    int tamanho_horizontal = 3;
    
    int i;
    int j;
    
    printf("Coordenadas do Navio Vertical:\n");
    for (i = 0; i < tamanho_vertical; i++) {
        tabuleiro[linha_inicio_vertical + i][coluna_vertical] = 1;
        printf("(%d, %d)\n", linha_inicio_vertical + i, coluna_vertical);
    }

 
    printf("\nCoordenadas do Navio Horizontal:\n");
    
    for (j = 0; j < tamanho_horizontal; j++) {
        tabuleiro[linha_horizontal][coluna_inicio_horizontal + j] = 1;
        printf("(%d, %d)\n", linha_horizontal, coluna_inicio_horizontal + j);
    }

    return 0;
}
