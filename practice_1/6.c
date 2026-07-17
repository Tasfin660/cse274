#include <stdio.h>

int main() {

  int rpm, radius;

  scanf("%d %d", &rpm, &radius);

  double mph = ((2 * 3.1416 * (radius / 100.0) * (rpm * 60)) / 1000) * 0.621371;

  printf("%.2lf", mph);
  return 0;
}
