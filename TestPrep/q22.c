/*Both min and max elements of array*/

#include <stdio.h>
int main(){
    int max, min, n, i;

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);
    
    int a[n];

    printf("Enter the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("The array is: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }

    printf("Maximum element is: %d", max);

    for (i = 0; i < n; i++){
        if (a[i] < min){
            min = a[i];
        }
    }

    printf("Minimum element is: %d", min);

    return 0;
}