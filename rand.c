#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
  srand(time(NULL));
  printf("%d", RAND_MAX);
  // d = rand() / (double) (Rand_MAX + 1)
  // a + d * (b-a+1)
  printf("%d", rand());
}
