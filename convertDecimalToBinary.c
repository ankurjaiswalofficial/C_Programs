#include <stdio.h>

int main()
{
    int binarySet[100], decimalNumber, remainder, tempStore, counter = 0;
    printf("Enter The Decimal Number: ");
    scanf("%d", &decimalNumber);
    tempStore = decimalNumber;
    while (decimalNumber != 1)
    {
        remainder = decimalNumber % 2;
        binarySet[counter] = remainder;
        counter++;
        decimalNumber /= 2;
    }
    binarySet[counter] = 1;
    printf("The Binary Number from Decimal Number %d is: ", tempStore);
    for (int i = counter; i >= 0; i--)
    {
        printf("%d", binarySet[i]);
    }

    return 0;
}