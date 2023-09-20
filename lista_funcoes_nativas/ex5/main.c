#include <stdio.h>

int main() {
    int matriz[3][3];
    int matrizT[3][3];
    int i, j;

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Digite o numero da linha %d, coluna %d: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
           matrizT[i][j] = matriz[j][i];
        }
    }

    printf("Matriz: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Transposta: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("[%d] ", matrizT[i][j]);
        }
        printf("\n");
    }

}
