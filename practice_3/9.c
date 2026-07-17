#include <stdio.h>

int main() {
  int n, count = 0;

  scanf("%d", &n);

  if (n == 0)
    count++;

  while(n) {
    count++;
    n /= 10;
  }

  printf("%d", count);

  return 0;
}
