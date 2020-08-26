#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  swap(&a, &b);
  printf("%d\n%d", a, b);
}