// Pass.

#include <stdio.h>

int main() {
  int phone;

  scanf("%d", &phone);

  if (phone < 1000000 || phone > 9999999) {
	return 1;
  }

  if (phone >= 5550000 && phone <= 5559999) {
	printf("1\n");
  } else {
	printf("0\n");
  }

  return 0;
}
