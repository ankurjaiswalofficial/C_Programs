#include <stdio.h>

int main()
{
    int number, undivisibility = 0;
    printf("Enter The Number: ");
    scanf("%d", &number);
    for (int i = 2; i <= (number / 2); i++)
    {
        if ((number % i) == 0)
        {
            undivisibility = undivisibility + 1;
            break;
        }
    }
    if (undivisibility > 0)
    {
        printf("%d is a not Prime Number.", number);
    }
    else
    {
        printf("%d is a Prime Number.", number);
    }

    return 0;
}