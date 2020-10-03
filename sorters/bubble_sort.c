#include <stdio.h>
#include <stdlib.h>

/**
 * @fn sort
 * @brief Bubble sort
 * @param array Array to sort
 * @param size Size of array
 * @return N/A
 */
void sort(int* array, int size) {
  int changed;
  do {
    changed = 0;  // Set changed to false(0)
    for (int index = 0; index < size; index++) {
      if (index == size - 1)  // If current index is last index
        continue;
      void* item = array[index];      // Get current item
      if (item > array[index + 1]) {  // If current item bigger then next item
        array[index] = array[index + 1];  // Replace current item with next item
        array[index + 1] = item;          // Replace next item with current item
        changed = 1;                      // Set changed to true(1)
      }
    }
  } while (changed);  // Return if changed is true(1)
}

/**
 * @fn test
 * @brief Test algorithm
 * @return N/A
 */
void test() {
  int size = 10;                                 // Size of array
  int* array = (int*)calloc(size, sizeof(int));  // Create new array
  for (int index = 0; index < 10; index++)
    array[index] = rand() % 100;  // Set random number
  printf("%s", "----- BEFORE -----\n");
  for (int index = 0; index < 10; index++)
    printf("%d\n", array[index]);  // Print current item
  printf("%s", "----- AFTER -----\n");
  sort(array, size);
  for (int index = 0; index < 10; index++)
    printf("%d\n", array[index]);  // Print current item
}

/**
 * @fn main
 * @brief Entry point
 * @return 0
 */
int main() {
  test();    // Make test
  return 0;  // Exit with 0
}
