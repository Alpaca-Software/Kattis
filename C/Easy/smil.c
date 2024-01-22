// Accepted (100).

#include <stdio.h>
#include <stdlib.h>

#define INPUT_SIZE 2047

int main() {
  char input[INPUT_SIZE + 1];

  // Read input.
  for (int i = 0; i < INPUT_SIZE + 1; i++) {
    input[i] = getchar();

    if (input[i] == '\n') {
      input[i] = 0; // Null byte at the end of text.
      break;
    }
  }

  // Search smiles.
  for (int i = 0; input[i] != 0; i++) {
    // Check for possible start of a smile.
    if (input[i] != ':' && input[i] != ';') {
      continue;
    }

    // Check for a smile of size 2.
    if (input[i + 1] == ')') {
      printf("%d\n", i);
      i++;

      continue;
    }

    // Check for possible start of a smile of size 3.
    if (input[i + 1] != '-') {
      continue;
    }

    // Check for a smile of size 3.
    if (input[i + 2] == ')') {
      printf("%d\n", i);
      i++;

      continue;
    }
  }

  return EXIT_SUCCESS;
}
