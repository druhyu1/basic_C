/*
1
2 2
3 3 3 
*/

#include <stdio.h>
int main(){
    int i, j, n;

    printf("How Many Rows do you want: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i){
        for (j = 1; j <= i; ++j){
            printf("%d ", i);
        }  
        printf("\n");      
    }
    return 0;
}