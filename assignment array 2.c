#include <stdio.h>
int main(){
    int matrixA [2][2] = {{1, 2}, {4, 5}};
    int matrixB [2][2] = {{7,8}, {10, 11}};
    int matrixTotal[2][2];
    int size = sizeof(matrixTotal) / sizeof(int);
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matrixA[%d][%d] = %d\n ", i,j,matrixA[i][j]);
        }
        
    }
        printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matrixB[%d][%d] = %d\n", i,j,matrixB[i][j]);
        }
        
    }
        printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int jumlah = matrixA[i][j] + matrixB[i][j];
            matrixTotal[i][j] = jumlah;
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matrixTotal[%d][%d] = %d\n", i,j,matrixTotal[i][j]);
        }
        
    }
    
    return 0;
}