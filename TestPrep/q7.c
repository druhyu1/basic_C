/*Factorial of a number*/

#include <stdio.h>
int main(){
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an Integer: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Factorial of Negative Number is not possible.");
    }
    else{
        for (i = 1; i <= n; ++i){
            factorial *= i;
        }
    }
    printf("Factorial of %d is %llu", n,factorial);
    return 0;
}