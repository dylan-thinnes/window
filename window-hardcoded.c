#include <stdlib.h>
#include <stdio.h>

int history[10];

int main () {
  int window = 10;

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
