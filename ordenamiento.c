#include <stdio.h>
#include <stdlib.h>

int binary_search (int a[], int n, int s){
  int lo = 0;
  int hi = n;
  while (hi-lo > 1) {
    int mid = (lo+hi)/2;
    if (a[mid] > s)
      hi = mid;
    else
      lo = mid;
  }
  return lo;
}

int main(int argc, char const *argv[]) {
  int list[] = {1,2,3,6,9,10,12,28};
  int index = binary_search(list,8,12);
  return 0;
}
