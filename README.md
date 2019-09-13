# doubly-linked-list
C doubly linked list implementation. To install, simply drop the files inside your main file's folder and include "doubly_linked_list.c"

# Documentation

  A IntegerListItem is a data structure that contains an integer as its value attribute, a pointer to the next IntegerListItem and a pointer to the previous IntegerListItem. This is what it looks like:
  
```C
  typedef struct IntegerListItem {
      int value;
      struct IntegerListItem * next;
      struct IntegerListItem * previous;
  } IntegerListItem;
```

  If an element is empty(like the previous of the first element or the next of the last element), it should point to NULL.
  
  To initialize a list, you have to do the following:

```C

  IntegerListItem * list_item = (IntegerListItem *)malloc(sizeof(IntegerListItem));
  list_item = initializeIntegerList();

```

and then you are ready to use your doubly linked integer list.

## Functions

#### ```IntegerListItem * initializeIntegerList(void)```
Simply returns NULL.

#### ```IntegerListItem * insertIntegerAt(IntegerListItem * list_pointer, int value, int index)```
Given a pointer to the start of the list, a value to insert and an index, it inserts the new item on desired position and returns the list(or a new pointer to the start of the list, if you are inserting elements at the start of it).

#### ```IntegerListItem * removeIntegerAt(IntegerListItem * list_pointer, int index)```
Given a pointer to the start of the list and an index, removes the item at that position and returns a pointer to the start of it.

#### ```IntegerListItem * sortIntegerListAsc(IntegerListItem * list_pointer)```
Given a pointer to the start of the list, sorts the values of the IntegerListItems in ascending order.

#### ```IntegerListItem * sortIntegerListDesc(IntegerListItem * list_pointer)```
Given a pointer to the start of the list, sorts the values of the IntegerListItems in descending order.

#### ```int getIntegerAt(IntegerListItem * list_pointer, int index)```
Given a pointer to the start of the list and an index, returns the integer value that is contained on IntegerListItem's value attribute.

#### ```int getListLength(IntegerListItem * list_pointer)```
Given a pointer to the start of the list, returns the length(number of elements) of the list.

#### ``` void showAllInIntegerList(IntegerListItem * list_pointer)```
Given a pointer to the start of the list, print all its values.

#### ```IntegerListItem * destroyIntegerList(IntegerListItem * list_pointer)```
Given a pointer to the start of the list, deallocates all ItemListItem pointers and returns a freed pointer.
