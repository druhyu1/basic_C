/*Search an element and return its index*/

#include <stdio.h>
int main(){
    int search, n, i;

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

    printf("Enter The element you want to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++){
        if (search == a[i]){
            printf("%d is present in array at index %d", search, i);
            break;
        }
    }
    if (i == n){
            printf("Element is not present.");
        }
    return 0;
}