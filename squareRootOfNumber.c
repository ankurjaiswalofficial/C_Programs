#include <stdio.h>
#include <math.h>

int main(){
    int number;
    double temp;
    printf("Enter The Number: ");
    scanf("%d", &number);
    temp = sqrt(number);
    printf("The Square Root Of %d is %.4lf.", number, temp);
    return 0;
}