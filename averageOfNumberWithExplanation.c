#include <stdio.h>

int main()
{
    int number_store[100], more, sum = 0, count;
    for (int i = 0; i < 100; i++)
    {
        count++;
        printf("Enter The Number: ");
        int temp;
        scanf("%d", &temp);
        number_store[i] = temp;
        printf("Want to enter more numbers\nIf Yes Enter 1\nElse any other number: ");
        scanf("%d", &more);
        if (more != 1)
        {
            break;
        }
    }
    printf("\nSum of All The Numbers: ");
    for (int i = 0; i < count; i++)
    {
        sum += number_store[i];
        if (i == (count - 1))
        {
            printf("%d = ", number_store[i]);
        }
        else
        {
            printf("%d + ", number_store[i]);
        }
    }
    printf("%d\n", sum);
    printf("\nNow,\n");
    printf("               Sum Of All Numbers\n");
    printf("Average Is = ------------------------\n");
    printf("              Total Count Of Numbers\n");
    printf("\nSo,\n");
    float average = (float)sum / count;
    printf("Average Is = %.2f\n", average);
    return 0;
}
