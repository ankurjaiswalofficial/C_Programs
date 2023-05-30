#include <stdio.h>

int main()
{
    int number, number_store, temp, counter = 0;
    printf("Enter Your Number: ");
    scanf("%d", &number);
    number_store = number;
    while (number != 0)
    {
        temp = number % 10;
        if (temp > 1)
        {
            counter++;
        }
        number /= 10;
    }
    (counter > 0) ? printf("%d is not a BINARY NUMBER.", number_store) : printf("%d is a BINARY NUMBER.", number_store);
    return 0;
}