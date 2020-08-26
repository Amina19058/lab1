#include <stdio.h>
#include <string.h>

void print_triangle(int height, int width) {
  int t = width / 2;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if ((t - i <= j) & (t + i >= j)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  int w, h;
  scanf("%d", &h);
  w = 2*h-1;
  print_triangle(h, w);
  return 0;
}