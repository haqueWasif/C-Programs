#include <stdio.h>

void print32BitBinary(int x) {
  for (int i = 31; i >= 0; i--) {
    int bit = (x >> i) & 1;
    printf("%d", bit);
  }
  printf("\n");
}

int main() {
  int x = 10;
  print32BitBinary(x);
  return 0;
}