// Accepted (65).

#include <stdio.h>
#include <stdlib.h>

struct lap {
  int participant;
  int secs;
};

struct lapsum {
  int participant;
  int secs;
  int laps;
};

int cmplapsum(const void *a, const void *b) {
  struct lapsum *lapsum1 = (struct lapsum *)a;
  struct lapsum *lapsum2 = (struct lapsum *)b;

  if (lapsum1->secs > lapsum2->secs) {
    return 1;
  }

  if (lapsum1->secs < lapsum2->secs) {
    return -1;
  }

  return 0;
}

int main(int argc, char *argv[]) {
  int totallaps, finishlaps, participants;

  scanf("%d %d %d", &totallaps, &finishlaps, &participants);

  struct lap *laps = malloc(sizeof(struct lap) * totallaps);
  if (laps == NULL) {
    return EXIT_FAILURE;
  }

  for (int i = 0; i < totallaps; i++) {
    int participant, mins, secs;

    scanf("%d %d.%d", &participant, &mins, &secs);

    laps[i] =
        (struct lap){.participant = participant, .secs = secs + mins * 60};
  }

  struct lapsum *lapsums = malloc(sizeof(struct lapsum) * participants);
  if (lapsums == NULL) {
    return EXIT_FAILURE;
  }

  // Initialize `lapsum`.
  for (int i = 0; i < participants; i++) {
    lapsums[i] = (struct lapsum){.secs = 0, .laps = 0};
  }

  // Start sum.
  for (int i = 0; i < totallaps; i++) {
    struct lapsum *ls = &lapsums[laps[i].participant - 1];
    ls->participant = laps[i].participant;
    ls->laps++;
    ls->secs += laps[i].secs;
  }

  qsort(lapsums, participants, sizeof(struct lapsum), cmplapsum);

  for (int i = 0; i < participants; i++) {
    if (lapsums[i].laps >= finishlaps) {
      printf("%d\n", lapsums[i].participant);
    }
  }

  free(lapsums);
  free(laps);

  return EXIT_SUCCESS;
}
