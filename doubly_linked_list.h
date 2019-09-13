typedef struct IntegerListItem {
    int value;
    struct IntegerListItem * next;
    struct IntegerListItem * previous;
} IntegerListItem;

IntegerListItem * initializeIntegerList(void);
IntegerListItem * insertIntegerAt(IntegerListItem * list_pointer, int value, int index);
IntegerListItem * removeIntegerAt(IntegerListItem * list_pointer, int index);
IntegerListItem * sortIntegerListAsc(IntegerListItem * list_pointer);
IntegerListItem * sortIntegerListDesc(IntegerListItem * list_pointer);
int getIntegerAt(IntegerListItem * list_pointer, int index);
int getListLength(IntegerListItem * list_pointer);
void showAllInIntegerList(IntegerListItem * list_pointer);
IntegerListItem * destroyIntegerList(IntegerListItem * list_pointer);
