#include <stdio.h>

void main()
{
    int n;
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", n, factorial);
}