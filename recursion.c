#include <stdio.h>
int f(int n) {
  if(n==0)
    return 1;
  else if(n==1)
    return 3;
  else 
    return 4*f(n-1) - f(n-2);
}
int main() {
  int n = 0;
  while(scanf("%d", &n) != EOF) {
    printf("%d", f(n));
  }
}

