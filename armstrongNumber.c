#include <stdio.h>
#include <math.h>

// Armstrong Number ==> 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153

int main()
{
    int number, temp, value_store, value_holder = 0, number_of_digits = 0;
    printf("Enter The Number: ");
    scanf("%d", &number);
    value_store = number;
    while (number > 0)
    {
        number = number / 10;
        number_of_digits++;
    }
    number = value_store;
    while (number > 0)
    {
        temp = number % 10;
        value_holder = pow(temp, number_of_digits) + value_holder;
        number = number / 10;
    }
    if (value_store == value_holder)
    {
        printf("%d is a Armstrong Number.", value_store);
    }
    else
    {
        printf("%d is not a Armstrong Number.", value_store);
    }

    return 0;
}