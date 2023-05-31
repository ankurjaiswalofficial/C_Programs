#include <stdio.h>

int main()
{
    int number, halved_value, temp;
    printf("Enter The Number: ");
    scanf("%d", &number);
    halved_value = number / 2;
    printf("1 ");
    for (int i = 2; i <= halved_value; i++)
    {
        temp = number % i;
        if (temp == 0)
        {
            int valid = 0;
            for (int j = 2; j <= (i / 2); j++)
            {
                if (i % 2 == 0)
                {
                    valid = 1;
                    break;
                }
            }
            if (valid == 0)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}