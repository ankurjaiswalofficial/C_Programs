#include <stdio.h>

int main()
{
    int times, num1 = 0, num2 = 1, temp;
    printf("Enter the number of Fibonacci Numbers Required: ");
    scanf("%d", &times);
    printf("Required Fibonacci Series:\n%d %d ", num1, num2);
    for (int i = 0; i < (times - 2); i++)
    {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        printf("%d ", temp);
    }
    return 0;
}