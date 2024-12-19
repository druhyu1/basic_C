/*Checking prime number*/

#include <stdio.h>
int main(){
    int n, i, flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        flag = 1;
    }
    for (i = 2; i <= n/2; ++i) {
        if (n % i == 0){
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("%d is not a Prime Number.", n);
    }
    else{
        printf("%d is a Prime Number.", n);
    }
    return 0;
}