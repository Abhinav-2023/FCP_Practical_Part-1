#include <stdio.h>

void main()
{
    int arr[] = {1,7,5,10,9,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
}