#include <stdio.h>

void main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Odd indexed elements: ");
    for(int i = 1; i < size; i+=2)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}