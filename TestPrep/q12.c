/*
*
* *
* * *
*/

#include <stdio.h>
int main(){
    int i, j, rows;

    printf("Enter The Number of rows you want to have: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i){
        for (j = 1; j <= i; ++j){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}