/*Reverse a number using for loop*/

#include <stdio.h>

int main(){
    int number, reversed = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    for (; number != 0; number /= 10){
        int digit = number % 10;
        reversed = reversed * 10 + digit;
    }
    printf("Reversed Number is %d", reversed);

    return 0;
}