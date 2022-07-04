#include <stdlib.h>
#include <stdio.h>

int main (int argc, char** argv) {
  int window = 10;
  if (argc >= 2) {
    sscanf(argv[1], "%d", &window);
  }

  int* history = malloc(sizeof(int) * window);

  int idx = 0;
  int looped = 0;
  int new_val = 0;
  while (1 == scanf("%d\n", &new_val)) {
    int old_val = history[idx];
    history[idx] = new_val;
    idx = (idx + 1) % window;

    if (looped) {
      printf("%f\n", (double) (new_val - old_val) / (double) window);
    } else {
      looped = idx == 0;
    }
  }
}
