#include <stdio.h>

int main()
{
    float celciusValue, fahrenheitValue;
    printf("Enter The Celcius Value: ");
    scanf("%f", &celciusValue);
    fahrenheitValue = (celciusValue * 9 / 5) + 32;
    printf("%f degree Celcius in Fahrenheit is: %f", celciusValue, fahrenheitValue);
    return 0;
}