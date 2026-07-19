#include <stdio.h>

int main() {
  int size;

  printf("Size: ");
  scanf("%d", &size);

  int arr[size], new_arr[size];

  for (int i = 0; i < size; i++) {
    new_arr[i] = 0;
  }

  printf("Elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
    if (new_arr[i] == 1)
      continue;

    int count = 0;

    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j])
        count++;
    }

    printf("%d occurs %d times\n", arr[i], count);

    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j])
        new_arr[j] = 1;
    }
  }

  return 0;
}
