// Pass.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char forbidden[26+1];
  char memo[(int) 1e5 + 1];

  scanf("%s\n", &forbidden);
  scanf("%[^\n]s", &memo);
  
  int i = 0;
  int startWord = 0;
  while (memo[i] != 0) {
	int j = 0;
	if (memo[i] == ' ') {
	  startWord = i+1;
	}
	while (forbidden[j] != 0) {
	  if (memo[i] == forbidden[j]) {
		int k = startWord;
		while (memo[k] != ' ' && memo[k] != 0) {
		  memo[k] = '*';
		  k++;
		}
		break;
	  }

	  j++;
	}

	i++;
  }


  printf("%s\n", memo);

	return EXIT_SUCCESS;
}
