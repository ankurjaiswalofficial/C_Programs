#include <stdio.h>

int main()
{
    printf("**Warning : This Program can calculate factorial of upto 16 only.**\n");
    int number, temp, factorial = 1;
    printf("Enter The Number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Program only supports zero and positive numbers.");
    }
    else if (number == 0)
    {
        printf("Factorial of %d is %d.", number, factorial);
    }
    else if (number < 17)
    {
        temp = number;
        while (temp > 0)
        {
            factorial *= temp;
            temp--;
        }
        printf("Factorial of %d is %d.", number, factorial);
    }
    else
    {
        printf("**Program will result in wrong value so the output is blocked.**");
    }

    return 0;
}
