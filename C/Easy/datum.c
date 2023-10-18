
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int day;
  int month;

  scanf("%d %d", &day, &month);

  char DAY_NAMES[7][20] = {
	"Sunday",
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
  };

  int MONTH_SIZES[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


  int dayname = 4;

  for (int m = 0; m < 12; m++) {
	for (int d = 0; d < MONTH_SIZES[m]; d++) {
	  if (d+1 == day && m+1 == month) {
		goto printday;
	  }

	  dayname++;

	  if (dayname == 7) {
		dayname = 0;
	  }
	}
  }

printday:
  printf("%s\n", DAY_NAMES[dayname]);

	return EXIT_SUCCESS;
}
