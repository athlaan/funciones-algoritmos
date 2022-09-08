#include <stdio.h>
#include <stdlib.h>

void stringMayus(char *palabra) {
  int i = 0;
  while (palabra[i] >= 'a' && palabra[i] <= 'z') {
    palabra[i] -= 32;
    i++;
  }
}




int main(int argc, char  *argv[]) {
  char *asd = argv[1];
  printf("%s\n", asd);
  stringMayus(asd);
  printf("%s\n", asd);
  return 0;
}
