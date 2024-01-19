// Pass (100%).

#include <stdio.h>
#include <stdlib.h>

int main() {
  int money;
  scanf("%d", &money);

  int transactions = 0;

  // Execute most 500 amount transactions.
  while (money > 400) {
    transactions++;
    money -= 500;
  }

  // Now we have 0-400 of money.
  if (money > 300) {
    transactions += 2;
    money -= 200 * 2;
  }

  // Now we have 0-300 of money.
  if (money > 200) {
    transactions += 2;
    money -= 200 + 100;
  }

  // Now we have 0-200 of money.
  if (money > 100) {
    transactions++;
    money -= 200;
  }

  // Now we have 0-100 of money.
  if (money > 0) {
    transactions++;
  }

  printf("%d\n", transactions);

  return EXIT_SUCCESS;
}
