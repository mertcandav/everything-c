#include <limits.h>  // For maximum limits of types
#include <stdio.h>

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
  for (int number = 1; number <= INT_MAX; number++) {
    int total = 0;  // Total for addition
    for (int bnumber = 1; bnumber < number; bnumber++)
      total += number % bnumber == 0 ? bnumber
                                     : 0;  // Sum with bnumber if mod of number
                                           // and bnumber equals to zero
    if (total == number)                   // If total is equals to number
      printf("%d\n", number);              // Print perferc number
  }
  return 0;  // Exit with 0
}
