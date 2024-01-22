// Accepted.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int bridges, knights, groupsize;
  scanf("%d %d %d", &bridges, &knights, &groupsize);

  bridges--;

  int groups = knights / groupsize;
  int days = bridges / groups;

  if (bridges % groups > 0) {
    days++;
  }

  printf("%d\n", days);

  return EXIT_SUCCESS;
}
