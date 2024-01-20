// Accepted (100).

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define LINE_SIZE 2101
int main() {
  char line1[LINE_SIZE], line2[LINE_SIZE];

  // Get lines.

  int line1index = 0;
  for (char ch = 0; ch != '\n';) {
    ch = getchar();
    line1[line1index] = ch;
    line1index++;
  }
  line1[line1index - 1] = 0;
  line1index = 0;

  int line2index = 0;
  for (char ch = 0; ch != '\n';) {
    ch = getchar();
    line2[line2index] = ch;
    line2index++;
  }
  line2[line2index - 1] = 0;
  line2index = 0;

  // Process lines.
  int phraseindex = 0;
  char phrase[LINE_SIZE * 3];

  bool line1finished = false;
  bool line2finished = false;

  for (;;) {
    for (;;) {
      char ch = line1[line1index];

      if (line1finished) {
        break;
      }
      if (ch == '|') {
        line1index++;
        break;
      }
      if (ch == 0) {
        line1finished = true;
        break;
      }

      phrase[phraseindex] = ch;
      phraseindex++;

      line1index++;
    }

    for (;;) {
      char ch = line2[line2index];

      if (line2finished) {
        break;
      }
      if (ch == '|') {
        line2index++;
        break;
      }
      if (ch == 0) {
        line2finished = true;
        break;
      }

      phrase[phraseindex] = ch;
      phraseindex++;

      line2index++;
    }

    phrase[phraseindex] = ' ';
    phraseindex++;

    if (line1finished && line2finished) {
      break;
    }
  }

  phrase[phraseindex + 1] = 0;

  printf("%s\n", phrase);

  return EXIT_SUCCESS;
}
