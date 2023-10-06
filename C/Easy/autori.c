
#include <stdio.h>

int main() {
  char text[100];
  char c;
  int i = 0;

  scanf("%s", text);

  printf("%c", text[0]);
  while (1) {
	c = text[i];

	if (c == 0) {
	  break;
	}
	
	if (c == '-') {
	  printf("%c", text[i+1]);
	}
	 i++;
  }

  return 0;
}
