/*Multiplication of matrix*/

#include <stdio.h>

int main(){
    int m, n, p, q, c, d, k, sum = 0;

    printf("Enter the rows & columns of 1st matrix: ");
    scanf("%d %d", &m, &n);
    int first[m][n];

    printf("Enter 1st matrix");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
        
    }
    

    printf("Enter the rows & columns of 2nd matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p)
    {
        printf("NO MULTIPLY");
    }
    else{
        int second[p][q];
        printf("Second Matrix");
        for (c = 0; c < p; c++)
        {
        for (d = 0; d < q; d++)
        {
            scanf("%d", &second[c][d]);
        }
        
        }

        int multiply[m][q];
        for (c = 0; c < m; c++)
        {
        for (d = 0; d < q; d++)
        {
            for (k = 0; k < p; k++)
            {
                sum = sum + first[c][k]*second[k][d];
            }
            multiply[c][d] = sum;
            sum = 0;
            
        }
        
        }
        printf("Product of entered matrices:\n");
        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++)
                printf("%d\t", multiply[c][d]);
            printf("\n");
        }
    }
    return 0;

    }
    


