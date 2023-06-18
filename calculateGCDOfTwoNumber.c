#include <stdio.h>

int main() {
  int num1, num2, hcf, num2_temp;

  printf("Enter two numbers: ");
  scanf("%d%d", &num1, &num2);

  num2_temp = num2;
  hcf = num1;
  while (num2 != 0) {
    int temp = num2;
    num2 = hcf % num2;
    hcf = temp;
  }
  printf("The HCF or GCD of %d and %d is %d\n", num1, num2_temp, hcf);

  return 0;
}
