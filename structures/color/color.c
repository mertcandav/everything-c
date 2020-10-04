#include "color.h"

void reverseRGB(RGB* rgb) {
  rgb->R = 255 - rgb->R;  // Revese red
  rgb->G = 255 - rgb->G;  // Reverse green
  rgb->B = 255 - rgb->B;  // Reverse blue
}

void reverseARGB(ARGB* rgb, int alpha) {
  if (alpha == 1)           // If alpha is 1
    rgb->A = 255 - rgb->A;  // Reverse alpha
  rgb->R = 255 - rgb->R;    // Reverse red
  rgb->G = 255 - rgb->G;    // Reverse green
  rgb->B = 255 - rgb->B;    // Reverse blue
}
