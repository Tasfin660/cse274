#include <stdio.h>

int main() {

  int n; // A 4 digit number
  scanf("%d", &n);

  int digit_1 = n / 1000;
  int digit_2 = (n / 100) % 10;
  int digit_3 = (n / 10) % 10;
  int digit_4 = n % 10;

  int reverse_digit = digit_4 * 1000 + digit_2 * 100 + digit_3 * 10 + digit_1;
  printf("%d", reverse_digit);

  return 0;
}
