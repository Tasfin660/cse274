#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 2; i * i <= n; i++) {
    int count = 0;
    while (n % i == 0) {
      count++;
      n /= i;
    }
    printf("%d^%d * ", i, count);
  }

  if (n > 1)
    printf("%d^1", n);

  return 0;
}
