#include <stdio.h>
#include <math.h>

int main()
{
    double number, power, temp;
    printf("Enter The Number: ");
    scanf("%lf", &number);
    printf("Enter it's Power: ");
    scanf("%lf", &power);
    temp = pow(number, power);
    printf("The Value Of %.4lf raised to the Power %.4lf is: %.4lf", number, power, temp);
    return 0;
}