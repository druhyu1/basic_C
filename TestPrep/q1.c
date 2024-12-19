/*Largest between three integers using if-else*/

#include <stdio.h>
int main(){
    int n1, n2, n3;

    printf("Enter Three Number: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            printf("%d is the largest Number.", n1);
        }
        else
        {
            printf("%d is the largest Number.", n3);
        }
    } 
    else if (n2 >= n3)
    {
        printf("%d is the largest Number.", n2);
    }
    else
    {
        printf("%d is the largest Number.", n3);
    }
    return 0;
}