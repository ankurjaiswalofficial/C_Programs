#include <stdio.h>

typedef enum
{
    false,
    true
} bool;

int main()
{
    bool is_negative = false;
    long int number, temp;
    int power, power_temp;

    printf("Enter The Number: ");
    scanf("%ld", &number);
    temp = number;
    printf("Enter it's Power: ");
    scanf("%d", &power);

    power_temp = power;

    if (power < 0)
    {
        is_negative = true;
        power *= -1;
    }

    while ((power - 1) > 0)
    {
        number *= temp;
        power--;
    }
    if (is_negative)
    {
        double inverse_number = 1 / number;
        printf("The value of %ld raised to the power %d is: %lf\n", temp, power_temp, inverse_number);
    }
    else
    {

        printf("The value of %ld raised to the power %d is: %ld\n", temp, power_temp, number);
    }
    return 0;
}
