#include <stdio.h>

int main()
{
    int start_value, end_value, count = 0;
    printf("Enter The Range Start Value: ");
    scanf("%d", &start_value);
    printf("Enter The Range End Value: ");
    scanf("%d", &end_value);
    printf("Prime Numbers in the Range %d to %d are:\n", start_value, end_value);
    for (int i = start_value; i < (end_value + 1); i++)
    {
        int divisibility = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                divisibility++;
                break;
            }
        }
        if (divisibility == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}