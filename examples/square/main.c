#include <stdio.h>

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
  int size = 10;    // Widh and height of square
  char mark = '*';  // Square draw mark
  for (int height = 0; height < size; height++) {
    for (int width = 0; width < size; width++) {
      printf("%c", mark);  // Print draw mark
    }
    printf("%s", "\n");  // Print new line
  }
  return 0;  // Exit with 0
}
