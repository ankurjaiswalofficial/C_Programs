#include <stdio.h>

int main()
{
    int octalSet[100], decimalNumber, remainder, tempStore, counter = 0;
    printf("Enter The Decimal Number: ");
    scanf("%d", &decimalNumber);
    tempStore = decimalNumber;
    while (decimalNumber >= 8)
    {
        remainder = decimalNumber % 8;
        octalSet[counter] = remainder;
        counter++;
        decimalNumber /= 8;
    }
    octalSet[counter] = decimalNumber;
    printf("The Octal Number from Decimal Number %d is: 0o", tempStore);
    for (int i = counter; i >= 0; i--)
    {
        printf("%d", octalSet[i]);
    }

    return 0;
}