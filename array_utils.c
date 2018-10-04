#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"array_utils.h"




int * makeCopy(int *a, int n) {
  int *copy = (int *)malloc(sizeof(int) * n);
  int i;
    for(i=0; i<n; i++) {
      copy[i] = a[i];
 }
 return copy;
 }


int contains(int *arr, int size, int x) {
  for (int i = 0; i < size; i++) {
    if (x == arr[i]) {
      return 1;
    }
  }
  return 0;
}

int containsWithin(const int *arr, int size, int x, int i, int j) {
  for (int y = i; y < j; y++) {
    if (x == arr[i]) {
      return 1;
    }
    return 0;
  }
}




int * paddedCopy(const int *arr, int oldSize, int newSize) {


  arr = makeCopy(arr, oldSize)

  if (oldSize > newSize) {
    arr[newSize] = \0;
  } else if (oldSize < newSize) {
    int *arr = NULL;
    arr = (int *) malloc(sizeof(int) * size);
      for (int i = 0; i < size; i++) {
      arr[i] = (i+1);
  }



}
//
//
//
//
//
// void reverse(int *arr, int size) {
//
//
//
//
//
// }
//
//
//
//
//
// int * reverseCopy(const int *arr, int size) {
//
//
//
//
//
//
// }
