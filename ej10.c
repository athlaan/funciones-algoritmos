#include <stdio.h>
#include <stdlib.h>

void stringMinus(char *palabra) {
  int i = 0;
  while (palabra[i] >= 'A' && palabra[i] <= 'Z') {
    palabra[i] += 32;
    i++;
  }
}




int main(int argc, char  *argv[]) {
  char *asd = argv[1];
  stringMinus(asd);
  printf("%s\n", asd);
  return 0;
}
