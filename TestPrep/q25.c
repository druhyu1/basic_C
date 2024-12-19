/*Transpose of a Matrix*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, r, c;

    printf("Enter The Numbe of Rows and Columns: ");
    scanf("%d %d", &r, &c);

    int **a = (int **)malloc(r * sizeof(int *));
    int **transpose = (int **)malloc(c * sizeof(int *));

    for(i = 0; i < r; i++){
        a[i] = (int *)malloc(r * sizeof(int));
    }

    for(i = 0; i < c; i++){
        transpose[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter the matrix: ");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            printf("Enter the element: %d%d", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered Matrix: ");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
    for (j = 0; j < c; j++)
    {
        transpose[i][j] = a [j][i];
    }
    
    }
    

    printf("Transpose: ");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            printf("%d ", transpose[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        free(a[i]);
    }

    for(i = 0; i < c; i++){
        free(transpose[i]);
    }
    
    free(a);
    free(transpose);

    return 0;
}