#include <stdio.h>
int hcf;

int recursiveHCF(int num1, int num2)
{
    int temp = num2;
    num2 = hcf % num2;
    hcf = temp;
    if (num2 != 0)
    {
        recursiveHCF(num1, num2);
    }
    else
    {
        return hcf;
    }
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    hcf = num1;
    printf("The HCF or GCD of %d and %d is %d\n", num1, num2, recursiveHCF(num1, num2));

    return 0;
}
