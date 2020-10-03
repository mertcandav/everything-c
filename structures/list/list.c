#include "list.h"

#include <stdio.h>

LIST newList() {
  LIST lst;                              // New LIST instance
  lst.items = calloc(0, sizeof(void*));  // Create empty memorty space
  lst.count = 0;                         // Set count to zero
  return lst;                            // Return instance
}

void append(LIST* list, void* item) {
  list->items =
      realloc(list->items,
              (list->count + 1) * sizeof(void*));  // Create new memory size
  list->items[list->count] = item;                 // Set item to last
  list->count++;                                   // Raise count
}

int indexOf(LIST* list, void* item) {
  for (int index = 0; index < list->count; index++)
    if (list->items[index] == item)  // If current item equals to searched item
      return index;                  // Return index
  return -1;                         // Return -1(not found)
}

int contains(LIST* list, void* item) {
  return indexOf(list, item) !=
         -1;  // Return true if index is not -1, false if not
}

void sort(LIST* list) {
  int changed;
  do {
    changed = 0;  // Set changed to false(0)
    for (int index = 0; index < list->count; index++) {
      if (index == list->count - 1)  // If current index is last index
        continue;
      void* item = list->items[index];  // Get current item
      if (item >
          list->items[index + 1]) {  // If current item bigger then next item
        list->items[index] =
            list->items[index + 1];     // Replace current item with next item
        list->items[index + 1] = item;  // Replace next item with current item
        changed = 1;                    // Set changed to true(1)
      }
    }
  } while (changed);  // Return if changed is true(1)
}

void reverse(LIST* list) {
  for (int index = 0; index < list->count / 2; index++) {
    void* item = list->items[index];                       // Get current item
    void* litem = list->items[list->count - (index + 1)];  // Get reverse item
    list->items[index] = litem;  // Set current item with reverse item
    list->items[list->count - (index + 1)] =
        item;  // Set reverse item with current item
  }
}

void merge(LIST* dest, LIST* source) {
  for (int index = 0; index < source->count; index++)
    append(dest, source->items[index]);  // Add current item to destination list
}

void setItem(LIST* list, int index, void* item) {
  list->items[index] = item;  // Set item by index
}

void clear(LIST* list) {
  freeList(list);     // Free list
  *list = newList();  // Create new list
}

LIST copy(LIST* list) {
  LIST lst = newList();  // Create new list
  merge(&lst, list);     // Copy items from source
  return lst;            // Return copy
}

void removeAt(LIST* list, int index) { list->items[index] = NULL; }

void freeList(LIST* list) {
  free(list->items);   // Free items
  list->items = NULL;  // Set null items
  list->count = NULL;  // Set null count
}
