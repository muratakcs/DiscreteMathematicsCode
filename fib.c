#include <stdio.h>

int fib(int n) {
  if(n==0) return 23;
  if(n==1) return 435;
  return fib(n-1)+fib(n-2);
}

int main() {
  int f[20];
  for(int i=0; i<20; i++) {
    f[i] = fib(i);
  }
  for(int i=1; i<20; i++) {
    printf("%f\n", (double)f[i]/f[i-1]);
  }
  return 0;
}
