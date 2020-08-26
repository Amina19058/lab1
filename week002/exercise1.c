#include <stdio.h>
#include <float.h>
#include <limits.h>
int main() {
  int a = INT_MAX;
  float b = FLT_MAX;
  double c = DBL_MAX;
  printf("a: %lu\nb: %lu\nc: %lu\n", sizeof(a), sizeof(b), sizeof(c));
  return 0;
}