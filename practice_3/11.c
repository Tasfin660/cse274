#include <stdio.h>

int main() {
  int n, max, min, avg = 0, p;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    scanf("%d", &p);

    if ( p >= max)
      max = p;

    if (p <= min)
      min =  p;

    avg += p;
  }

  printf("Max: %d, Min: %d, Avg: %0.2lf", max, min, (avg * 1.0 / n));

  return 0;
}
