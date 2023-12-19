#include <stdio.h>

float CalculateSimpleInterest(float principal, float rate, float time){
    float SimpleInterest = principal * rate * time / 100;
    return SimpleInterest;
}

void main()
{
    float principal, rate, time;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    rate /= 100;

    printf("Enter time in years: ");
    scanf("%f", &time);

    float SimpleInterest = CalculateSimpleInterest(principal, rate, time);

    printf("Simple interest is : %f\n", SimpleInterest);
}