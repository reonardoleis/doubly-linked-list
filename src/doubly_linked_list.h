typedef struct IntegerListItem {
    int value;
    struct IntegerListItem * next;
    struct IntegerListItem * previous;
} IntegerListItem;

IntegerListItem * initializeIntegerList(void);
IntegerListItem * insertIntegerAt(IntegerListItem * list_pointer, int value, int index);
IntegerListItem * removeIntegerAt(IntegerListItem * list_pointer, int index);
int getIntegerAt(IntegerListItem * list_pointer, int index);
void showAllInIntegerList(IntegerListItem * list_pointer);
