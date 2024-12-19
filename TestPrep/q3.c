/*Basic Calculator Using Switch Statement*/

#include <stdio.h>
int main(){
    char op;
    double first, second;

    printf("Enter an Operator from(+,-,*,/): ");
    scanf(" %c", &op);

    printf("Enter Two Operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op){
        case '+':
            printf("The Sum of operands in %.1lf", first + second);
            break;
        case '-':
            printf("The Difference of operands in %.1lf", first - second);
            break;
        case '*':
            printf("The Product of operands in %.1lf", first * second);
            break;
        case '/':
        
            if (second != 0)
            {
                printf("The Quotient of operands in %.1lf", first / second);
            }
            else{
                printf("Division With Zero is not allowed.");
            }
            
            break;
    }
    return 0;
}