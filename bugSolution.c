#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // Correctly initialize the pointer

  if (ptr != NULL) { // Add a check to ensure pointer is valid
    *ptr = 20;
    printf("%d\n", x);
  } else {
    fprintf(stderr, "Error: Pointer is NULL.\n");
    return 1; // Indicate an error
  }

  return 0;
} 