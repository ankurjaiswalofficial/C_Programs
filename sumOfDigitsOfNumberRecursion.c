#include <stdio.h>

int adder(int number)
{
    int sum = 0, temp;
    if (number > 0)
    {
        temp = number % 10;
        sum += temp;
        number /= 10;
        return sum + adder(number);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    printf("Sum of all digits of %d is %d.", number, adder(number));
    return 0;
}
