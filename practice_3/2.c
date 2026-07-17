#include <stdio.h>

int main() {
  int n, f = 1;

  scanf("%d", &n);

  for (int i = n; i > 1; i--) {
    f *= i;
  }

  printf("%d", f);

  return 0;
}
