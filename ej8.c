#include <stdio.h>
#include <stdlib.h>


void contadorCaracteres(char *s) {
  int i = 0;
  int cont = 0;
  while(s[i] != 0) {
    cont++;
    i++;
  }
  printf("%d\n", cont);
}




int main(int argc, char *argv[]) {
  char *pal = argv[1];
  contadorCaracteres(pal);
  return 0;
}
