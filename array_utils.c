#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "array_utils.h"

int* makeCopy(const int* a, int n) {
  int* copy = (int*)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    copy[i] = a[i];
  }
  return copy;
}

int contains(const int* arr, int size, int x) {
  for (int i = 0; i < size; i++) {
    if (x == arr[i]) {
      return 1;
    }
  }
  return 0;
}

int containsWithin(const int* arr, int size, int x, int i, int j) {
  for (int y = i; y <= j; y++) {
    if (x == arr[y]) {
      return 1;
    }
  }
  return 0;
}

int* paddedCopy(const int* arr, int oldSize, int newSize) {
  int* arrDeep = NULL;
  if (oldSize > newSize) {
    arrDeep = makeCopy(arr, newSize);
  } else if (oldSize < newSize) {
    int* copy = (int*)malloc(sizeof(int) * newSize);
    for (int i = 0; i < oldSize; i++) {
      copy[i] = arr[i];
    }
    for (int i = oldSize; i < newSize; i++) {
      copy[i] = 0;
    }
    return copy;
  } else if (newSize == oldSize) {
    arrDeep = makeCopy(arr, newSize);
  }
  return arrDeep;
}

void reverse(int* arr, int size) {
  int* deepCopy = makeCopy(arr, size);
  int k = 0;
  for (int i = size - 1; i >= 0; i--) {
    arr[k] = deepCopy[i];
    k++;
  }
  return;
}

int* reverseCopy(const int* arr, int size) {
  int* deepCopy = makeCopy(arr, size);
  int k = 0;
  for (int i = size - 1; i >= 0; i--) {
    deepCopy[k] = arr[i];
    k++;
  }
  return deepCopy;
}
