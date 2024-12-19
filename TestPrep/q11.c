/*Count Digits in a number*/

#include <stdio.h>

int main(){
    long long n;
    int count = 0;

    printf("Enter a Number: ");
    scanf("%lld", &n);

    do{
        n /= 10;
        ++count;
    }while (n != 0);
    printf("The number of Digits is %d.", count);
    return 0;
}