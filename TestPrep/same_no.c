#include <stdio.h>

int main(){
    int j, i;
    printf("Enter how many times you want to print C: ");
    scanf("%d", &j);
    for (i = 1; i <= j; ++i){
        printf("1 ", i);
    }
    return 0;
}