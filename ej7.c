#include <stdio.h>
#include <stdlib.h>


void arrays_length(int a[], int length){
    int i = 0;
    while (i < length) {
      printf("%d ", a[i]);
      i++;
    }
    printf("\n");
}


int main(int argc, char *argv[]) {
  int a[] = {3,4,5};
  arrays_length(a, 2);
  return 0;
}
