#include <stdio.h>

int main()
{
    int mat[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    int size = sizeof(mat)/sizeof(int);
    printf("%d\n", size);

    int* g = &mat[0][0]+3;
    printf("%d\n", *g);
}