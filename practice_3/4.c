
#include <stdio.h>

int main() {
  int isPrime = 1;

  for (int i = 2; i <= 1000; i++) {
    isPrime = 1;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime == 1)
      printf("%d\n", i);
  }
  return 0;
}
