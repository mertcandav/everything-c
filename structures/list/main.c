#include <stdio.h>

#include "list.h"

/**
 * @fn test
 * @brief Test for list header
 * @return N/A
 */
void test() {
  LIST lst = newList();
  append(&lst, "Hello");
  append(&lst, "World");
  append(&lst, "Alive");
  printf("%d\n", indexOf(&lst, "World"));   // Require 1
  printf("%d\n", indexOf(&lst, 1));         // Require -1
  printf("%d\n", contains(&lst, "Hello"));  // Require 1
  printf("%d\n", contains(&lst, 1));        // Require 0
  printf("------ NORMAL ------\n");
  for (int index = 0; index < lst.count; index++)
    printf("%s\n", lst.items[index]);
  printf("------ SORTED ------\n");
  sort(&lst);
  for (int index = 0; index < lst.count; index++)
    printf("%s\n", lst.items[index]);
  printf("------ REVERSED ------\n");
  reverse(&lst);
  for (int index = 0; index < lst.count; index++)
    printf("%s\n", lst.items[index]);
  printf("------ MERGED ------\n");
  LIST dlst = newList();
  append(&dlst, "FOO");
  append(&dlst, "BAR");
  merge(&lst, &dlst);
  for (int index = 0; index < lst.count; index++)
    printf("%s\n", lst.items[index]);
  freeList(&dlst);
  printf("------ SET ITEM TEST ------\n");
  printf("Before: %s\n", lst.items[1]);
  setItem(&lst, 1, "World!");
  printf("After: %s\n", lst.items[1]);  // Require World!
  printf("------ COPY TEST ------\n");
  LIST cpyl = copy(&lst);
  for (int index = 0; index < cpyl.count; index++)
    printf("%s\n", cpyl.items[index]);
  cpyl.items[0] = "test";
  printf("CPYL: %s\n", cpyl.items[0]);
  printf("LST: %s\n", lst.items[0]);
  freeList(&cpyl);
  printf("------ REMOVE TEST ------\n");
  removeAt(&lst, 1);
  for (int index = 0; index < lst.count; index++)
    printf("%s\n", lst.items[index]);
  printf("------ CLEARED ------\n");
  clear(&lst);
  for (int index = 0; index < lst.count; index++)
    printf("%s\n", lst.items[index]);
  freeList(&lst);
  printf("SUCCESS TEST\n");
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
