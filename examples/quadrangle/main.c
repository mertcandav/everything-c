#include <stdio.h>

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
  int size = 10;    // Widh and height of quadrangle
  char mark = '*';  // Square draw mark
  for (int height = 1; height <= size; height++) {
    for (int space = 0; space < height; space++)
      printf("%c", ' ');  // Draw space
    for (int width = 0; width < size; width++) {
      printf("%c", mark);  // Print draw mark
    }
    printf("%s", "\n");  // Print new line
  }
  return 0;  // Exit with 0
}
