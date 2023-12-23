#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void numbers(int a , int b)
{
    printf("After swapping: a = %d, b = %d\n", a, b);
}

void main()
{
    int num1 = 1, num2 = 7;
    printf("Before swapping: a = %d, b = %d\n", num1, num2);

    swap(&num1, &num2);
    numbers(num1, num2);
}