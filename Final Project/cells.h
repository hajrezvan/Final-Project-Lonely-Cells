#ifndef FINAL_PROJECT_CELLS_H
#define FINAL_PROJECT_CELLS_H

//Information of cells
struct cells_information{
    int energy;
    int x_position;
    int y_position;
};

//Information of node of cells
struct cells_element{
    struct cells_element *next;
    struct cells_information *cells;
};

//Information of first list
struct first_game{
    int number_of_cells;
    struct cells_element *head_of_list;
};

//Only for first the game
struct first_game *new_list(void);
//Add a cell
struct cells_information *cells_new(int energy, int x_position, int y_position);

//For move, use from this function (first move, next remove)
void cells_remove(struct first_game *cell, int index);

struct cells_information split_a_cell_menu(void);

#endif
