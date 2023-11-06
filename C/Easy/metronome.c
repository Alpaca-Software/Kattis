// Pass.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int ticks;

  scanf("%d", &ticks);

  printf("%.2f\n", (float)ticks / 4);

  return EXIT_SUCCESS;
}
