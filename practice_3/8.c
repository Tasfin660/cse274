#include <stdio.h>

int main() {
  int s = 0, n1 = 7, n2 = 9;
  int lcm = n1 * n2;

  for (int i = 1; i <= 600; i += lcm) {
    s += i;
  }

  printf("%d", s);

  return 0;
}
