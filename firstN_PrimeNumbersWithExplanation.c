#include <stdio.h>

int main()
{
    int number, count = 0;
    printf("Enter The Number: ");
    scanf("%d", &number);
    int prime_number_store[number];
    printf("\nFor a number to be prime it should be divisible by 1 and itself only.\n");
    printf("\n1 is already a Prime Number.\n\n");
    for (int i = 2; i < (number + 1); i++)
    {
        int divisibility = 0;
        printf("Testing %d whether it's a Prime Number or not.\n", i);
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                divisibility++;
                printf("As %d is divisible by %d so without checking further divisibilities,\nLet's move on to another Number.\n\n", i, j);
                break;
            }
        }
        if (divisibility == 0)
        {
            printf("As %d is not divisible by another number except 1 and itself\nSo %d is a Prime Number.\n\n", i, i);
            prime_number_store[count] = i;
            count++;
        }
    }
    printf("First n Prime Numbers till %d are:\n1 ", number);
    for (int k = 0; k < count; k++)
    {
        printf("%d ", prime_number_store[k]);
    }
    return 0;
}