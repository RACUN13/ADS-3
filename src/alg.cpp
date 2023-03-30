// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int middle;
  int right = size - 1;
  while (left <= right) {
    middle = (left + right) / 2;
    if (arr[middle] == value)
      return 1;
    if (arr[middle] < value)
      left = middle + 1;
    else
      right = middle - 1;
  }
  return 0;
}
