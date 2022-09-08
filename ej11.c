#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stdbool.h"

void comparacion(char *a ,char *b){
  if (!strcmp(a, b) == true) {
    printf("XD\n");
  } else {
      printf("XDN'T\n");
    }
  }




int main(int argc, char  *argv[]) {
  char *a = argv[1];
  char *b = argv[2];
  comparacion(a, b);
  return 0;
}
