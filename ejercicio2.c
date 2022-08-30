#include <stdio.h>

int numeros(int a, int b, int c){
  if (a == b && b == c) {
    printf("iguales\n");
  }else {
    printf("false\n");
  }
  return 0;
}


int main(int argc, char const *argv[]) {
  numeros(3, 4, 5);
  numeros(2, 1, 9);
  numeros(6, 5, 4);
  numeros(3, 3, 3);

  return 0;
}
