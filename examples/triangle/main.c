#include <stdio.h>

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
  int size = 11;    // Widh and height of triange
  char mark = '*';  // Square draw mark
  for (int height = 1; height <= size; height++) {
    for (int width = 0; width < size - height; width++) {
      printf("%c", ' ');  // Print whitespace
    }
    for (int width = 0; width < height - (size - height); width++) {
      printf("%c", mark);  // Print draw mark
    }
    printf("%s", "\n");  // Print new line
  }
  return 0;  // Exit with 0
}
