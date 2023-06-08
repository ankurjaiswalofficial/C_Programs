#include <stdio.h>

int main()
{
    int number, temp;
    printf("Enter The Number: ");
    scanf("%d", &number);
    temp = number * number;
    printf("The Square of %d is %d.", number, temp);
    return 0;
}
