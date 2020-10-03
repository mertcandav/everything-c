#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/**
 * @typedef @struct LIST
 * @brief List declare
 * @field items Items or list
 * @field count Count of items
 */
typedef struct LIST {
  void** items;
  int count;
} LIST;

/**
 * @fn newList
 * @brief Create new LIST instance
 * @return List instance
 */
LIST newList();

/**
 * @fn append
 * @param list Destination list instance
 * @param item Item to append
 * @return N/A
 */
void append(LIST* list, void* item);

/**
 * @fn indexOf
 * @brief Search index of item in list
 * @param list Destination list instance
 * @param item Item to find
 * @return Index if find, -1 if not
 */
int indexOf(LIST* list, void* item);

/**
 * @fn contains
 * @brief Contains item
 * @param list Destination list instance
 * @param item Item to check
 * @return 1(True) if contains, 0(false) if not
 */
int contains(LIST* list, void* item);

/**
 * @fn sort
 * @brief Sort items of list
 * @param list Destination list instance
 * @return N/A
 */
void sort(LIST* list);

/**
 * @fn reverse
 * @brief Reverse list
 * @param list Destination list instance
 * @return N/A
 */
void reverse(LIST* list);

/**
 * @fn merge
 * @brief Merge lists
 * @param dest Destination list instance
 * @param source Source list instance
 * @return N/A
 */
void merge(LIST* dest, LIST* source);

/**
 * @fn setItem
 * @brief Set item by index
 * @param list Destination list instance
 * @param index Index
 * @param item Item to set
 * @return N/A
 */
void setItem(LIST* list, int index, void* item);

/**
 * @fn clear
 * @brief Clear all items
 * @param list Destination list instance
 * @return N/A
 */
void clear(LIST* list);

/**
 * @fn removeAt
 * @brief Remove item by index
 * @param list Destination list instance
 * @param index Index of item
 * @return N/A
 */
void removeAt(LIST* list, int index);

/**
 * @fn copy
 * @brief Copy list
 * @param list Destination list
 * @return Copy of destination
 */
LIST copy(LIST* list);

/**
 * @fn freeList
 * @brief Free LIST instance from memory
 * @param list Destination list instance
 * @return N/A
 */
void freeList(LIST* list);

#endif  // LIST_H
