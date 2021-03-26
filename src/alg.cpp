// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0, j = size-1; //i - левая граница массива, j - правая
  int k = 0; //счетчик
  while (i < j) {
    int mid = i+(j-i)/2;
    if (arr[mid] == value) {
      while (arr[mid] == value) {
        k++;
        i++;
      }
    } else if (arr[mid] > value)
        j = mid;
    else
      i = mid+1;
  }
  if (k > 0)
    return k;
  return 0; // если ничего не найдено
}
