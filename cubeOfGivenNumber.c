#include <stdio.h>

int main()
{
    int number, temp;
    printf("Enter The Number: ");
    scanf("%d", &number);
    temp = number * number * number;
    printf("The Cube of %d is %d.", number, temp);
    return 0;
}
