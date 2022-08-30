#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double roots(double a, double b, double c){
  // codigo que aplica la formula de la cuadratica
  double discriminant = b*b - 4*a*c;
  double root = sqrt(discriminant);
  double x1 = (-b + root) / (2*a);
  double x2 = (-b + root) / (2*a);
  return x1;
}

void to_lower_case(char *s){
  int i = 0;
  while (s[i] != 0){
    if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    i++
  }
}

int main(int argc, char const *argv[]) {
  printf("%s\n", argv[1]);
  to_lower_case(argv[1]);
  printf("%s\n", argv[1]);
  /*double a = 1;
  double b = 0;
  double c = -5;
  printf("%.2f\n", roots(a, b, c));*/
  return 0;
}
