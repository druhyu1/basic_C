/*Add Two Matrices*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, c, i, j;

    printf("Enter The Numbe of Rows and Columns: ");
    scanf("%d %d", &r, &c);

    int **a = (int**)malloc(r * sizeof(int *));
    int **b = (int**)malloc(r * sizeof(int *));
    int **sum = (int**)malloc(r * sizeof(int *));

    for (i = 0; i < r; i++){
        a[i] = (int*)malloc(r * sizeof(int));
        b[i] = (int*)malloc(r * sizeof(int));
        sum[i] = (int*)malloc(r * sizeof(int));
    }

    printf("Enter First Matrix");
    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter the element %d%d ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("1st matrix: ");
    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d", a[i][j]);
        }
    }

    printf("Enter Second Matrix");
    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter the element %d%d ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("1st matrix: ");
    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d", b[i][j]);
        }
    }
    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum");
    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d", sum[i][j]);
        }
    }

    for (i = 0; i < r; i++){
        free(a[i]);
        free(b[i]);
        free(sum[i]);
    } 

    free(a);
    free(b);
    free(sum);  
    return 0;
}