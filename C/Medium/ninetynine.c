// Accepted (First 60 Tests of 120).

#include <stdio.h>
#include <stdlib.h>

int rand_int() {
  if (rand() >= RAND_MAX / 2) {
    return 2;
  }

  return 1;
}

int main(int argc, char *argv[]) {
  int n;

  srand(7);
  printf("2\n");

  while (1) {
    fflush(stdout);
    scanf("%d", &n);

    switch (n) {
    case 99:
      return EXIT_SUCCESS;
    case 98:
      printf("99\n");
      return EXIT_SUCCESS;
    case 97:
      printf("99\n");
      return EXIT_SUCCESS;
    case 95:
    case 94:
      printf("96\n");
      break;
    default:
      printf("%d\n", n + rand_int());
      break;
    }
  }

  return EXIT_SUCCESS;
}
