/*Star Pattern Diamond*/

#include <stdio.h>
int main(){
    int i, j, rows, space;

    printf("Enter Rows(Odd Number): ");
    scanf("%d", &rows);

    if (rows % 2 == 0){
        printf("Enter an odd number.");
        return 1;
    }

    int mid = (rows + 1)/2;

    for (i = 1; i <= mid; i++){
        for (space = 1; space <= mid - i; space++){
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = mid - 1; i >= 1; i--){
        for (space = 1; space <= mid - i; space++){
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}