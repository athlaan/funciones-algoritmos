#include <stdio.h>
#include <stdlib.h>

void counting_sort_v2(int a[], int n){
  int max = max_in_array(a, n);
  int freq[max+1];
  int aux[n];
  cleararray(freqs, max+1);
  for (int i = 0; i < n; i++) {
    freqs[a[i]]++;        // fill freq array
  }
  int i = 0;
  int j = 0;
  while (i < n) {         // order in auxilary array
    if (freqs[j] != 0) {
      aux[i] = j;
      frqs[j]--;
      i++;
    } else {
      j++;
  }
}
for (int i = 0; i < n; i++) {
  a[i] = aux[i];        // copy back to original array
  }
}
