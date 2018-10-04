#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"array_utils.h"




int main(int argc, char const *argv[]) {

  int *containsArr = NULL;
  int size = 20;
  int value = 7;
  contiansArr = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
    containsArr[i] = (i+1);
  }
  double containsTest01 = contains(const *containsArr, size, value);

  if (containsTest01 == 1) {
    printf("the value is in the char array\n");
  } else {
    printf("the value is NOT in the char array\n");
  }

  return 0;
}
