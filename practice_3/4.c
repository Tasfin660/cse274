
#include <stdio.h>

int main() {
  int count = 1;

  printf("2\n");

  for (int i = 3; count < 1000; i += 2) {
    int isPrime = 1;

    for (int j = 3; j * j <= i; j += 2) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime == 1) {
      printf("%d\n", i);
      count++;
    }
  }

  return 0;
}
