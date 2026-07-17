#include <math.h>
#include <stdio.h>

int main() {

  double x;
  scanf("%lf", &x);

  printf("%.0f\n", floor(x));
  printf("%.0f\n", ceil(x));
  printf("%.0f\n", round(x));

  return 0;
}
