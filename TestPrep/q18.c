/*Maximum Element in Array*/

#include <stdio.h>
int main(){
    int size, i, maximum;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the Array: ");

    for (i = 1; i < size; i++){
        scanf("%d", &array[i]);
    }
    
    maximum = array[0];

    for (i = 0; i < size; i++){
        if(array[i] > maximum){
            maximum = array[i];
        }
    }
    printf("\nThe maximum number in array is: %d", maximum);
    return 0;
}