#include <stdio.h>

void print_arrays (int a[], int length){
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}


int main(void) {
  int a[] = {1,2,3,4};
  int b[] = {99,101,72,99,535,1999,2006};
  int c[] = {0};
  print_arrays(a,4);
  print_arrays(b,7);
  print_arrays(c,1);

  return 0;
}
