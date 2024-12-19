/*Reverse The Array*/

#include <stdio.h>
int main(){
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Reversed Array: ");
    for (i = n - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}