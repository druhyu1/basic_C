/*Ascending order*/

#include <stdio.h>
int main(){
    int temp, n, i, j;

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

    for(i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Ascending order: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}