/*Sum of first N natural numbers*/

#include <stdio.h>
int main(){
    int n, i, sum = 0;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        sum += i;
    }
    printf("The sum oof first %d natural numbers is: %d", n, sum);
    return 0;
}