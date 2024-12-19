/*Remove duplicates from an array*/

#include <stdio.h>
int main(){
    int k, n, i, j;

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
        for(j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                for(k = j; k < n - 1; k++){
                    a[k] = a[k + 1];
                }
                j--;
                n--;
            }
        }
    }

    printf("The array after removing duplicates is: ");

    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}