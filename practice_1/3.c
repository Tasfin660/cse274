#include <stdio.h>

int main() {

  char c;
  scanf(" %c", &c);

  char next_c = ((c + 1 - 'a') % 26) + 'a';

  printf("%c", next_c);
  return 0;
}
