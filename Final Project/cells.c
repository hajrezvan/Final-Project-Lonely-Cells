#include <stdlib.h>
#include "cells.h"
#include "menus.h"

struct first_game *new_list(void){
    struct first_game *pointer;
    pointer = (struct first_game *) malloc(sizeof(struct first_game));
    pointer->number_of_cells = 0;
    pointer->head_of_list = NULL;
    return pointer;
}

struct cells_information *cells_new(int energy, int x_position, int y_position){
    action_menu();
}

void cells_remove(struct first_game *cell, int index){
    struct cells_element *node;
    node = cell->head_of_list;
    if (index == 0){
        cell->head_of_list = node->next;
        free(node);
    } else{
        int i = 0;
        while (node && i + 1 < index){
            node = node->next;
            i++;
        }
        if (i + 1 == index){
            struct cells_element *helper_pointer = node->next->next;
            free(node->next);
            node->next = helper_pointer;
        }
    }
}

struct cells_information split_a_cell_menu(void){
    //if ()
}