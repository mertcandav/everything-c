#include <stdio.h>

/**
 * @fn fibo
 * @brief Print fibonacci serie
 * @param one One number
 * @param two Two number
 * @return N/A
 */
void fibo(int one, int two) {
  int fib = one + two;  // Calculate fibonacci
  printf("%d\n", fib);  // Print fibonacci
  fibo(two, fib);       // Calculate new fibonacci
}

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
  fibo(1, 0);  // Calculate fibonacci serie
  return 0;    // Exit with 0
}
