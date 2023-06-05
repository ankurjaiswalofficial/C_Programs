#include <stdio.h>
#include <math.h>

int main()
{
    int number, root;
    printf("Enter The Number: ");
    scanf("%d", &number);
    root = pow(number, 0.5);
    if ((root * root) == number)
    {
        printf("%d is a Perfect Number.", number);
    }
    else
    {
        printf("%d is not a Perfect Number.", number);
    }
    return 0;
}