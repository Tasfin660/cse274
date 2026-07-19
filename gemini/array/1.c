#include <stdio.h>

int main() {
  int size;

  printf("Size: ");
  scanf("%d", &size);

  int arr[size];

  printf("Elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
  }

  return 0;
}
