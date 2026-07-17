#include <stdio.h>

int main() {

  double a, b, c, target;
  double t_op1 = 0, t_op2 = 0, t_op1_op2 = 0, t_op2_op1 = 0;
  char op1, op2;

  scanf("%lf %lf %lf %lf", &a, &b, &c, &target);
  scanf(" %c %c", &op1, &op2);

  if (op1 == '+')
    t_op1 = a + b + c;
  else if (op1 == '-')
    t_op1 = a - b - c;
  else if (op1 == '*')
    t_op1 = a * b * c;
  else if (op1 == '/')
    t_op1 = a / b / c;

  if (op2 == '+')
    t_op2 = a + b + c;
  else if (op2 == '-')
    t_op2 = a - b - c;
  else if (op2 == '*')
    t_op2 = a * b * c;
  else if (op2 == '/')
    t_op2 = a / b / c;

  if (op1 == '+' && op2 == '-') {
    t_op1_op2 = a + b - c;
    t_op2_op1 = a - b + c;
  } else if (op1 == '+' && op2 == '*') {
    t_op1_op2 = a + b * c;
    t_op2_op1 = a * b + c;
  } else if (op1 == '+' && op2 == '/') {
    t_op1_op2 = a + b / c;
    t_op2_op1 = a / b + c;
  }

  else if (op1 == '-' && op2 == '+') {
    t_op1_op2 = a - b + c;
    t_op2_op1 = a + b - c;
  } else if (op1 == '-' && op2 == '*') {
    t_op1_op2 = a - b * c;
    t_op2_op1 = a * b - c;
  } else if (op1 == '-' && op2 == '/') {
    t_op1_op2 = a - b / c;
    t_op2_op1 = a / b - c;
  }

  else if (op1 == '*' && op2 == '+') {
    t_op1_op2 = a * b + c;
    t_op2_op1 = a + b * c;
  } else if (op1 == '*' && op2 == '-') {
    t_op1_op2 = a * b - c;
    t_op2_op1 = a - b * c;
  } else if (op1 == '*' && op2 == '/') {
    t_op1_op2 = a * b / c;
    t_op2_op1 = a / b * c;
  }

  else if (op1 == '/' && op2 == '+') {
    t_op1_op2 = a / b + c;
    t_op2_op1 = a + b / c;
  } else if (op1 == '/' && op2 == '-') {
    t_op1_op2 = a / b - c;
    t_op2_op1 = a - b / c;
  } else if (op1 == '/' && op2 == '*') {
    t_op1_op2 = a / b * c;
    t_op2_op1 = a * b / c;
  }

  if (t_op1 == target)
    printf("%.2lf%c%.2lf%c%.2lf=%.2lf\n", a, op1, b, op1, c, t_op1);
  if (t_op2 == target)
    printf("%.2lf%c%.2lf%c%.2lf=%.2lf\n", a, op2, b, op2, c, t_op2);

  if (t_op1_op2 == target)
    printf("%.2lf%c%.2lf%c%.2lf=%.2lf\n", a, op1, b, op2, c, t_op1_op2);
  if (t_op2_op1 == target)
    printf("%.2lf%c%.2lf%c%.2lf=%.2lf\n", a, op2, b, op1, c, t_op2_op1);

  if (t_op1 != target && t_op2 != target && t_op1_op2 != target &&
      t_op2_op1 != target)
    printf("Impossible");

  return 0;
}
