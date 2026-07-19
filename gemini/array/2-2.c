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

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      int temp = arr[j];

      if (arr[j] > arr[j + 1]) {
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    int count = 1;
    while (i < (size - 1) && arr[i] == arr[i + 1]) {
      count++;
      i++;
    }
    printf("%d occurs %d times\n", arr[i], count);
  }

  return 0;
}
