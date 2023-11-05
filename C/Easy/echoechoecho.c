// Pass.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char word[15];

  scanf("%s", &word);

  printf("%s %s %s\n", word, word, word);

  return EXIT_SUCCESS;
}
