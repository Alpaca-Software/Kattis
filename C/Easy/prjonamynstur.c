// Pass (100%).

#include <stdio.h>
#include <stdlib.h>

int main() {
  int rows, cols;

  scanf("%d %d", &rows, &cols);

  // Reserve memory.
  char *symbols = malloc(sizeof(char) * rows * cols + 1);
  if (symbols == NULL) {
    return EXIT_FAILURE;
  }
  symbols[rows * cols] = 0;

  int symbolindex = 0;
  for (int i = 0; i < rows; i++) {
    // Consume line break.
    getchar();

    for (int j = 0; j < cols; j++) {
      symbols[symbolindex] = getchar();
      // printf("symbol is %c (%d)\n", symbols[symbolindex],
      // symbols[symbolindex]);
      symbolindex++;
    }
  }

  int milimeters = 0;
  for (symbolindex = 0; symbols[symbolindex] != 0; symbolindex++) {
    // printf("symbol is %c (%d)\n", symbols[symbolindex],
    // symbols[symbolindex]);
    switch (symbols[symbolindex]) {
    case '.':
      milimeters += 20;
      break;
    case 'O':
      milimeters += 10;
      break;
    case '\\':
    case '/':
      milimeters += 25;
      break;
    case 'A':
      milimeters += 35;
      break;
    case '^':
      milimeters += 5;
      break;
    case 'v':
      milimeters += 22;
      break;
    default:
      printf("Error: Unexpected symbol: '%c'\n", symbols[symbolindex]);
      return EXIT_FAILURE;
    }
  }

  printf("%d\n", milimeters);

  return EXIT_SUCCESS;
}
