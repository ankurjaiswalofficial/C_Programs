#include <stdio.h>

int factorialCalc(int number)
{
    int factorial = 1;
    if (number == 0)
    {
        return factorial;
    }

    return factorial * number * factorialCalc(number - 1);
    
}

int main()
{
    printf("**Warning : This Program can calculate factorial of upto 16 only.**\n");
    int number, factorial = 1;
    printf("Enter The Number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Program only supports zero and positive numbers.");
    }
    else if (number > 16)
    {
        printf("**Program will result in wrong value so the output is blocked.**");
    }
    else
    {
        factorial = factorialCalc(number);
        printf("Factorial of %d is %d.", number, factorial);
    }

    return 0;
}
