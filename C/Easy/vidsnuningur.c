// Pass.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char input[1000];

  scanf("%s", &input);

  int last;
  for (int i = 0; i < 1000; i++) {
	if (input[i] == 0) {
	  last = i-1;
	  break;
	}
  }

  for (int i = last; i >= 0; i--) {
	printf("%c", input[i]);
  }

	return EXIT_SUCCESS;
}
