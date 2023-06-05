#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    while (num2 != 0)
    {
        int num3 = (num1 & num2); // 123 => 1111011, 2 => 0000010 ==> 123 & 2 => 0000010 => 2
        num1 = num1 ^ num2; // 123 => 1111011, 2 => 0000010 ==> 123 ^ 2 => 1111001 => 64+32+16+8+1 => 121
        num2 = num3 << 1; // 123 => 1111011, 2 => 0000010 ==> 2 => 0000100 => 4
    }
    printf("Sum is: %d", num1);
    return 0;
}