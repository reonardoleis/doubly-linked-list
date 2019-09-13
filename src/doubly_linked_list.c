#include "doubly_linked_list.h"
#include <stdlib.h>
#include <stdio.h>

IntegerListItem * initializeIntegerList(void){

    return NULL;

}

IntegerListItem * insertIntegerAt(IntegerListItem * list_pointer, int value, int index){

    IntegerListItem * current_item = list_pointer;
    IntegerListItem * new_item     = (IntegerListItem *) malloc(sizeof(IntegerListItem));
    new_item -> value = value;
    if(current_item == NULL){
        new_item -> previous = NULL;
        new_item -> next = NULL;
        return new_item;
    }
    int i;
    for(i = 0; current_item -> next != NULL; i++){

        if(i == index){

            if(current_item -> previous == NULL){

                current_item -> previous = new_item;
                new_item -> next = current_item;
                new_item -> previous = NULL;
                return new_item;
            }else{
                new_item -> previous = current_item -> previous;
                new_item -> next = current_item;
                current_item -> previous -> next = new_item;
                current_item -> previous = new_item;
                return list_pointer;
            }
}

        current_item = current_item -> next;

    }

    if(current_item -> next == NULL){
        if(index > i + 1){
            index = i + 1;
        }
        if(index != 0){
            i++;
        }
        if(i == index || index -1 != i){

            if(current_item -> previous == NULL && index == 0){
                current_item -> previous = new_item;
                new_item -> next = current_item;
                new_item -> previous = NULL;
                return new_item;
            }else if(index == i){
                current_item -> next = new_item;
                new_item -> next = NULL;
                new_item -> previous = current_item;
                return list_pointer;
            }else{
                new_item -> previous = current_item -> previous;
                new_item -> next = current_item;
                current_item -> previous -> next = new_item;
                current_item -> previous = new_item;
                return list_pointer;
            }
        }
    }



}

IntegerListItem * removeIntegerAt(IntegerListItem * list_pointer, int index){

    IntegerListItem * temp_pointer = list_pointer;

    if(index == 0){

        if(list_pointer -> next == NULL){

            return NULL;

        }else{
            temp_pointer = list_pointer -> next;
            temp_pointer -> previous = NULL;
            return temp_pointer;
        }

    }else{

        int i;

        for(i = 0; temp_pointer != NULL; i++){

            if(i == index){
                if(temp_pointer -> next != NULL){

                    temp_pointer -> next -> previous = temp_pointer -> previous;
                    temp_pointer -> previous -> next = temp_pointer -> next;

                }else{

                    temp_pointer -> previous -> next = NULL;

                }

                return list_pointer;

            }

            temp_pointer = temp_pointer -> next;

        }
        printf("\nIndex out of range.\n");
        return list_pointer;

    }

}

IntegerListItem * sortIntegerListAsc(IntegerListItem * list_pointer){

    IntegerListItem * fixed = list_pointer;
    IntegerListItem * compare = list_pointer;
    int temp;
    int list_length = getListLength(list_pointer);
    int i, j;
     for(i = 0; i < list_length; i++){
        for(j = 0; j < list_length - 1; j++){

            if(fixed -> value < compare -> value){
                temp = fixed -> value;
                fixed -> value = compare -> value;
                compare -> value = temp;

            }

            compare =  compare -> next;

        }
        compare = list_pointer;
        fixed = fixed -> next;

    }

    return list_pointer;

}


IntegerListItem * sortIntegerListDesc(IntegerListItem * list_pointer){

    IntegerListItem * fixed = list_pointer;
    IntegerListItem * compare = list_pointer;
    int temp;
    int list_length = getListLength(list_pointer);
    int i, j;
     for(i = 0; i < list_length; i++){
        for(j = 0; j < list_length - 1; j++){

            if(fixed -> value > compare -> value){
                temp = fixed -> value;
                fixed -> value = compare -> value;
                compare -> value = temp;

            }

            compare =  compare -> next;

        }
        compare = list_pointer;
        fixed = fixed -> next;

    }

    return list_pointer;

}

int getIntegerAt(IntegerListItem * list_pointer, int index){

    IntegerListItem * current_item = list_pointer;
    int i;
    for(i = 0; current_item -> next != NULL; i++){

        if(i == index){

            return current_item -> value;

        }

        current_item = current_item -> next;

    }



    if(i == index){

        return current_item -> value;
    }

    return NULL;

}

int getListLength(IntegerListItem * list_pointer){
    IntegerListItem * current_item = list_pointer;
    int length = 0;
    while(current_item -> next != NULL){
        current_item = current_item -> next;
        length++;
    }
    return length + 1;
}

void showAllInIntegerList(IntegerListItem * list_pointer){

    IntegerListItem * current_item = list_pointer;
    if(current_item != NULL){

        while(current_item != NULL){

            printf("%d\n", current_item -> value);
            current_item = current_item -> next;

        }

    }else{

        printf("Integer list is empty.\n");

    }

}

IntegerListItem * destroyIntegerList(IntegerListItem * list_pointer){

    IntegerListItem * current_item = list_pointer -> next;
    while(current_item != NULL){
        free(list_pointer);
        list_pointer = current_item;
        current_item = list_pointer -> next;
    }

    return list_pointer;

}
