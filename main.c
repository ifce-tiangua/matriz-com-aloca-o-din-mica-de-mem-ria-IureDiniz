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
        for(int i = 0; i < lin*col; i++){
                int aux = 0;
                scanf(" %d", &aux);
                matriz[i] =(int*) aux; 
        }


        for(int i = 0; i < lin*col; i++){
            printf("%d ", matriz[i]);
            if((i+1)%col == 0)
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