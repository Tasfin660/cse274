#include <stdio.h>

  int main() {

  double x;
  scanf("%lf", &x);

  int floorValue = (int)x;
  int ceilValue = x == floorValue ? x : floorValue + 1;

  printf("%d\n", floorValue);
  printf("%d", ceilValue);

  return 0;
}
