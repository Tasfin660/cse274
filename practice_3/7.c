#include <stdio.h>

int main() {
  int n, reverse_n = 0;

  scanf("%d", &n);

  int temp = n;

  while (1) {
    if(!n)
      break;

    reverse_n = (reverse_n * 10) + n % 10;
    n /= 10;
  }

  if (temp == reverse_n)
    printf("Palindrome");
  else
    printf("Not Palindrome");

  return 0;
}
