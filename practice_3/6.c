#include <stdio.h>

int main() {
  int p1 = 1, p2 = 1, next, n = 15;

  if (n >= 1)
    printf("%d ", p1);
  if (n >= 2)
    printf("%d ", p2);

  for (int i = 3; i <= n; i++) {
    next = p1 + p2;
    printf("%d ", next);
    p1 = p2;
    p2 = next;
  }

  return 0;
}
