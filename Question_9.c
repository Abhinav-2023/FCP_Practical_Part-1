#include <stdio.h>

void main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    float average = 0.0;

    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        sum += arr[i];

        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    average = (float)sum / n;
    printf("Average: %f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

}