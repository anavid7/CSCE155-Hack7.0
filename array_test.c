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
  arr = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
    arr[i] = (i+1);
  }
  double containsTest01 = contains(arr, size, value);
  double containsWithinTest01 = containsWithin(arr, size, value, i, j);


  printf("contains test:\n");
  if (containsTest01 == 1) {
    printf("the value is in the char array\n");
  } else {
    printf("the value is NOT in the char array\n");
  }

  printf("contains within test:\n");
  if (containsWithinTest01 == 1) {
    printf("the value is in the char array within the values\n");
  } else {
    printf("the value is NOT in the char array within the values\n");
  }

  return 0;
}
