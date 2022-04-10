#include <stdio.h>

int main() {
  // size of pyramid
  // can also be read from stdin
  int size ;
  scanf("%d",&size);
  for (int i = 0; i < size; i++) {
    // printing spaces
    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }
    // printing numbers
    for (int k = 0; k < 2*i+1; k++) {
      printf("%d", i+1);
    }
    printf("
");
  }
  return 0;
}