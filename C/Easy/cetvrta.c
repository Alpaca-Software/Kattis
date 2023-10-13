// Pass.

#include <stdio.h>
#include <stdlib.h>

struct Point {
  int x;
  int y;
};

int main(int argc, char *argv[])
{
	struct Point user[3];

	for (int i = 0; i < 3; i++) {
	  scanf("%d %d", &user[i].x, &user[i].y);
	}

	int a = user[0].x;
	int b = user[0].y;
	int c = user[0].x;
	int d = user[0].y;

	for (int i = 0; i < 3; i++) {
	  if (user[i].x != a) {
		c = user[i].x;
	  }
	   if (user[i].y != b) {
		d = user[i].y;
	   }
	}
	
	struct Point points[4] = {
	  {a,b},
	  {a,d},
	  {c,b},
	  {c,d},
	};

	for (int i = 0; i < 4; i++) {
	  int has = 0;
	  for (int j = 0; j < 3; j++) {
		if (points[i].x == user[j].x && points[i].y == user[j].y) {
		  has = 1;
		  break;
		}
	  }

	  if (has == 0) {
		printf("%d %d\n", points[i].x, points[i].y);
	return EXIT_SUCCESS;
	  }
	}

	return EXIT_SUCCESS;
}

