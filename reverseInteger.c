#include <stdio.h>

int main()
{
    int number, temp_store, temp_value, new_number = 0;
    printf("Enter The Number: ");
    scanf("%d", &number);
    temp_store = number;
    while (number > 0)
    {
        temp_value = number % 10;
        new_number = new_number * 10 + temp_value;
        number /= 10;
    }
    printf("Reverse of %d is %d", temp_store, new_number);
}