// Pass.

#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int size) {
  int tmp;

  for (int i = 0; i < size; i++) {
	for (int j = 0; j < size-1; j++) {
	  if (array[j] < array[j+1]) {
		tmp = array[j];
		array[j] = array[j+1];
		array[j+1] = tmp;
	  }
	}
  }
}

int main(int argc, char *argv[])
{
	int totalpoison;
	int duration;
	int *poisons;

	scanf("%d %d", &totalpoison, &duration);

	poisons = (int*) malloc(totalpoison * sizeof(int));

	for (int i = 0; i < totalpoison; i++) {
	  scanf("%d", &poisons[i]);
	}

	sort(poisons, totalpoison);

	for (int i = 0; i < totalpoison; i++) {
	  if (poisons[i] <= (totalpoison - i - 1)*duration) {
		printf("NO\n");
		goto exit;
	  }
	}

	printf("YES\n");

exit:
	free(poisons);
	return EXIT_SUCCESS;
}

