/**
* Authors: David Ryan, Colin siple, Victor Nguyen
* Date Modified: 10/5/2018
* Class: CSCE155e
* Professor: Dr. Chris Bourke
* NUID: 47810715
*/



//makes a copy funtion
int * makeCopy(const int *a, int n);
//cheakes for int in array
int contains(const int *arr, int size, int x);
//cheacks for int in interval in array
int containsWithin(const int *arr, int size, int x, int i, int j);
//paddes array or cuts array deppending on new size
int * paddedCopy(const int *arr, int oldSize, int newSize);
//revers array
void reverse(int *arr, int size);
//copies and reverse array
int * reverseCopy(const int *arr, int size);
