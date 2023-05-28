#include <stdio.h>

int times, num1 = 0, num2 = 1, temp;
int recursor(int times, int num1, int num2)
{
    temp = num1 + num2;
    num1 = num2;
    num2 = temp;
    printf("%d ", temp);
    if (times == 1)
    {
        return 0;
    }
    times--;
    recursor(times, num1, num2);
}
int main()
{
    printf("Enter the number of Fibonacci Numbers Required: ");
    scanf("%d", &times);
    times -= 2;
    printf("Fibonacci Series Using Recursion:\n%d %d ", num1, num2);
    recursor(times, num1, num2);
    return 0;
}