#include <stdio.h>
#include <stdlib.h>

//version 0(n^2), usando counting sort y tres indices
int better_threesum(int a[]. int n){
  int count = 0;
  for (int i = 0;  < n-2; i++) {
    /* code */
  }
  int c = 0;
  int i = 0;
  while (i < n-2) {
    int j = i+1;
    int k = n-1;
    while (j < k) {
      int sum = a[i] + a[j] + a[k];
      if (sum == 0) {
        count++;
        printf("(%d, %d, %d)\n", a[i],a[j],a[k]);
        //c++;
        j++;
        k--;
      }
      else if (sum < 0){
      j++;
    }
    else{
      k--;
    }
  }
  return count;
}

int main(int argc, char const *argv[]){
  srand(time(NULL));
}
