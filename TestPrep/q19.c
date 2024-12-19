/*Sum of Elements in array*/

#include <stdio.h>
int main(){
    int size, i, sum = 0;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++){
        sum += array[i];
    }
    printf("Sum = %d", sum);

    return 0;
}