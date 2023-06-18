#include <stdio.h>

int main()
{
    float principle, rate, time, calculation;
    printf("Simple Interest is calculated using the formula: \nSimple Interest = (Principle x Rate x Time) / 100");
    printf("\nwhere, Principle is the Principle Amount on which Interest needs to be calculated.\nEnter Principle Amount: ");
    scanf("%f", &principle);
    printf("\nand Rate is the Interest Rate applied on the Principle Amount.\nEnter the Rate: ");
    scanf("%f", &rate);
    printf("\nand, Time is the Time Period of Interest on the Principle Amount.\nEnter the Time (in Years Only): ");
    scanf("%f", &time);
    calculation = (principle * rate * time) / 100;
    printf("\nCalculating according to the Formula we get the Simple Interest Amount is: %f", calculation);
    return 0;
}