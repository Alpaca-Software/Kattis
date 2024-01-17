// Pass 100%.

#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int digits;
  scanf("%d", &digits);

  fputs("0.", stdout);
  for (int i = 0; i < digits - 1; i++) {
    fputs("0", stdout);
  }

  puts("1");

  return EXIT_SUCCESS;
}
