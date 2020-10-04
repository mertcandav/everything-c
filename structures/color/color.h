#ifndef COLOR_H
#define COLOR_H

/**
 * @typedef @struct RGB
 * @brief RGB color instance
 * @field R Red
 * @field G Green
 * @field B Blue
 */
typedef struct RGB {
  unsigned short R;
  unsigned short G;
  unsigned short B;
} RGB;

/**
 * @typedef @struct ARGB
 * @brief ARGB color instance
 * @field A Alpha
 * @field R Red
 * @field G Green
 * @field B Blue
 */
typedef struct ARGB {
  unsigned short A;
  unsigned short R;
  unsigned short G;
  unsigned short B;
} ARGB;

/**
 * @fn reverseRGB
 * @brief Reverse color
 * @param rgb RGB instance
 * @return N/A
 */
void reverseRGB(RGB* rgb);

/**
 * @fn reverseARGB
 * @brief Reverse color
 * @param rgb ARGB instance
 * @param alpha Revese alpha yes = 1 no = any
 * @return N/A
 */
void reverseARGB(ARGB* rgb, int alpha);

#endif  // COLOR_H
