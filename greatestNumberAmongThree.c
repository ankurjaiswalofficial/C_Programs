#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter Number 3: ");
    scanf("%d", &num3);
    if ((num1 > num2) && (num1 > num3))
    {
        printf("%d is Greatest Number Among %d, %d, %d", num1, num1, num2, num3);
    }
    else if (num2 > num3)
    {
        printf("%d is Greatest Number Among %d, %d, %d", num2, num1, num2, num3);
    }
    else
    {
        printf("%d is Greatest Number Among %d, %d, %d", num3, num1, num2, num3);
    }

    return 0;
}
