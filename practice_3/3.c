#include <stdio.h>

int main() {
  int n, isPrime = 1;

  scanf("%d", &n);

  if (n <= 1)
    isPrime = 0;
  else {
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  if (isPrime == 0)
    printf("Not prime.\n");
  else
    printf("Prime.\n");

  return 0;
}
