#include <stdio.h>

int main() {
  /* GCD */
  int n1, n2;
  scanf("%d %d", &n1, &n2);

  int a = n1, b = n2;

  while (b != 0) {
    int remainder = a % b;
    a = b;
    b = remainder;
  }

  printf("GCD %d\n", a);
  printf("LCM %d", (n1 / a) * n2);

  return 0;
}
