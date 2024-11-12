#include <stdio.h>
#include <stdlib.h>

int main(){
    int lin, col;
    scanf("%d", &lin);
    scanf("%d", &col);

    int **matriz = (int**) malloc(lin * sizeof(int*));
    if(lin == 0 || col == 0){
        matriz[0] = NULL;
    }
    else{
        for(int i = 0; i < lin; i++){
            matriz[i] = (int*) malloc(col * sizeof(int)); 
        }
    }

    if(matriz[0] != NULL){
        for(int i = 0; i < lin; i++){
            for(int j = 0; j < col; j++){
                int aux = 0;
                scanf(" %d", &aux);
                matriz[i][j] = aux; 
            }
        }


        for(int i = 0; i < lin*col; i++){
                for(int j = 0; j < col; j++){
                printf("%d ", matriz[i][j]);
            }
         printf("\n");
        }
    }else{
        printf("vazio\n");
    }

    for(int i = 0; i < lin; i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}