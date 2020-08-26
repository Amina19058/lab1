#include <stdio.h>
#include <string.h>
int main() {
  char array[100];
  fgets(array, 100, stdin);
  for (int i=strlen(array)-1; i>=0; i--) {
    printf("%c", array[i]);
  }
  return 0;
}