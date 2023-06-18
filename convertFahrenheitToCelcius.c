#include <stdio.h>

int main()
{
    float celciusValue, fahrenheitValue;
    printf("Enter The Celcius Value: ");
    scanf("%f", &fahrenheitValue);
    celciusValue = (fahrenheitValue - 32) * 5 / 9;
    printf("%f degree Fahrenheit in Celcius is: %f", fahrenheitValue, celciusValue);
    return 0;
}