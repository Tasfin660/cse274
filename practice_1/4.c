#include <stdio.h>

int main() {

  char c;
  int n;
  scanf("%c", &c);
  scanf("%d", &n);

  char ahead_char = ((c + n - 'A') % 26) + 'A';
  char behind_char = ((c - n - 'A' + 26) % 26) + 'A';

  printf("%c %c", ahead_char, behind_char);
  return 0;
}
