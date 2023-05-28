#include <stdio.h>

int number, temp, value_store, value_holder = 0;
int recursor(int number, int value_holder)
{
    if (number > 0)
    {
        temp = number % 10;
        value_holder = temp + (value_holder * 10);
        number = number / 10;
        recursor(number, value_holder);
    }
    else if (value_store == value_holder)
    {
        printf("%d is a Plaindrome Number.", value_store);
    }
    else
    {
        printf("%d is not a Plaindrome Number.", value_store);
    }
    return 0;
}
int main()
{
    printf("Enter The Number: ");
    scanf("%d", &number);
    value_store = number;
    recursor(number, value_holder);
    return 0;
}