#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarray(int a[], int n){
  printf("[ ");
  for (int i = 0; i < n; i++)
    printf("%02d", a[i]);
    printf("]\n");
}

//mergesort
void sort(int a[], int aux[], int lo, int hi){
  // caso base
  if (hi - lo <= 1) return;
  // dividir recursivamente
  int mid = lo + (hi-lo) / 2;
  sort(a, aux, lo, mid);
  sort(a, aux, mid, hi);
  // merge
  int i = lo;
  int j = mid;
  for (int k = lo; k < hi; k++) {
    if    (i == mid)   aux[k] = a[j++];
    else if (j == hi)  aux[k] = a[i++];
    else if (a[j] > a[l]) aux[k] = a[j++];
    else                  aux[k] = a[i++];
  }
  // copy back
  for ( int k = lo; k < hi; k++)
    a[k] = aux[k];
}





// inicializa un aray de longitud n con enteros random ente lo y hi
void randomize_aray(int a[], int n, int lo, int hi){
  for (int i = 0; i < n; i++) {
    a[i] = (rand() % (hi-lo)) + lo;
  }
}


int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int a = atoi(argv[2]);
  int b = atoi(argv[3]);
  int list[n];
  int aux[n];
  randomize_array(list, n, a, b);
  printarray(list, n);
  sort (list, aux, 0, n);
  printarray(list, n);
  return 0;
}
