#include <stdio.h>

void main()
{
    float temperature, ConvertedTemperature;
    int choice;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("choose conversion type:\n");
    printf("1. Celcius to Farenheit\n");
    printf("2. Farenheit to Celcius\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d", &choice);

    if(choice == 1)
    {
        ConvertedTemperature = (temperature * 9.0/5.0) + 32;
        printf("%f Celsius is %f Fahrenheit\n ", temperature, ConvertedTemperature);
    }
    else if (choice == 2)
    {
        ConvertedTemperature = (temperature - 32) * 5.0 / 9.0;
        printf("%f Fahrenheit is %f Celsius\n ", temperature, ConvertedTemperature);
    }
    else  
    {
        printf("invalid choice\n");
    }
}