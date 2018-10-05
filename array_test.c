#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"array_utils.h"




int main(int argc, char const *argv[]) {

  int *arr = NULL;
  int size = 20;
  int value = 7;
  int i = 6;
  int j = 15;
  int newSize = 30;
  arr = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
    arr[i] = (i+1);
  }
  double containsTest01 = contains(arr, size, value);
  double containsWithinTest01 = containsWithin(arr, size, value, i, j);
  int *paddedCopyTest01 = paddedCopy(arr, size, newSize);
  reverse(arr, size);
  int *reverseCopyTest01 = reverseCopy(arr, size);



  printf("\ncontains test:\n");
  if (containsTest01 == 1) {
    printf("the value is in the char array\n");
  } else {
    printf("the value is NOT in the char array\n");
  }

  printf("\ncontains within test:\n");
  if (containsWithinTest01 == 1) {
    printf("the value is in the char array within the values\n");
  } else {
    printf("the value is NOT in the char array within the values\n");
  }

  printf("\npadded copy test:\n");
    for (i = 0; i < newSize; i ++) {
        printf( "%d ", paddedCopyTest01[i]) ;
      }


  printf("\nreverse copy test:\n");
    for (i = 0; i < size; i++) {
      printf("%d ", reverseCopyTest01[i]);
    }

  printf("\nreverse test:\n");
    for (i = 0; i < size; i ++) {
        printf( "%d ", arr[i]) ;
      }

  printf("\n");
  return 0;
}
