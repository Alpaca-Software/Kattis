// Pass.

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char moves[50];
	int pos = 1;

	scanf("%s", &moves);

	for (int i = 0; i < 50; i++) {
	  switch (moves[i]) {
		case 0:
		  goto exitloop;
		case 'A':
		  if (pos == 1) {
			pos = 2;
		  } else if (pos == 2) {
			pos = 1;
		  }
		  break;
		case 'B':
		  if (pos == 2) {
			pos = 3;
		  } else if (pos == 3) {
			pos = 2;
		  }
		break;
		case 'C':
		  if (pos == 1) {
			pos = 3;
		  } else if (pos == 3) {
			pos = 1;
		  }
		  break;
	  }

	}
exitloop:
	
	printf("%d\n", pos);

	return EXIT_SUCCESS;
}
