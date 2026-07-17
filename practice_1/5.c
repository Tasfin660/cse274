#include <stdio.h>

int main() {

  int n; // A 4 digit number
  scanf("%d", &n);

  int digit_1 = n / 1000;
  int digit_2 = (n / 100) % 10;
  int digit_3 = (n / 10) % 10;
  int digit_4 = n % 10;

  int sum = digit_4 + digit_3 + digit_2 + digit_1;

  printf("%d", sum);
  return 0;
}
