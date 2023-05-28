#include <stdio.h>

// Palindrome Number ==> 121 == 121
// If the number is reversed its value remains the same.

int main()
{
    int number, temp, value_store, value_holder = 0;
    printf("Enter The Number: ");
    scanf("%d", &number);
    value_store = number;
    while (number > 0)
    {
        temp = number % 10;
        value_holder = temp + (value_holder * 10);
        number = number / 10;
    }
    if (value_store == value_holder)
    {
        printf("%d is a Palindrome Number.");
    }
    else
    {
        printf("%d is not a Palindrome Number.");
    }

    return 0;
}