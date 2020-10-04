#include <stdio.h>

/**
 * @typedef @struct SWF
 * @brief Example struct
 * @field name Name
 * @field setName Function for set 'name' field
 */
typedef struct SWF {
  char* name;
  void (*setName)(struct SWF* swf, char* name);
} SWF;

/**
 * @fn setName
 * @brief Set name field of SWF instance
 * @param swf SWF instance
 * @param name Name to set
 * @return N/A
 */
void setName(SWF* swf, char* name) { swf->name = name; }

/**
 * @fn test
 * @brief Make test
 * @return N/A
 */
void test() {
  SWF swf;                   // Create new SWF instance
  swf.setName = &setName;    // Set function
  swf.name = "Foo";          // Set name "Foo" with field
  printf("%s\n", swf.name);  // Require Foo
  swf.setName(&swf, "Bar");  // Set name "Bar" with function
  printf("%s\n", swf.name);  // Require Bar
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
