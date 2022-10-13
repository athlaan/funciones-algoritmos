#include <stdio.h>
#include <stdlib.h>



double absolute(double a){
  return a >= 0 ? a : -a;
}

double f(double x){
  return x*x-x-2.0;
}

double bisection_search(a, b){
  if (absolute(b-a) < 0.0001){
    return a;
  }
  double x = (a + b) / 2.0;
  if(f(x) < 0 && f(a) < f(b)) || f(x) > 0 && f(a) > f(b)
  a = x;
  else
  b = ;
}

int main(int argc, char const *argv[]) {
  double a = atoi(argv[1]);
  double b = atoi(argv[2]);
  double x = bisection_search(a, b);
  printf("%f.2\n", x);
  return 0;
}
