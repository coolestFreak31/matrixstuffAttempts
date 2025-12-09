#include <stdio.h>
#include <stdlib.h>

int* summtrx(int mat1[][3], int mat2[][3], int rows) {
    int* mat = malloc(rows * 3 * sizeof(int)); // Динамически выделяем память для результата
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i * 3 + j] = mat1[i][j] + mat2[i][j];
        }
    }
    return mat; // Возвращаем указатель на массив результата
}


int main()
{
    int mat1[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    int mat2[2][3] = {{1, 2, 3},
                     {4, 5, 6}};


    int* mat3 = summtrx(mat1, mat2, 2);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat3[i * 3 + j]);
        }
        printf("\n");
    }

    free(mat3); 
    //int size1 = sizeof(mat1)/sizeof(int);
}
