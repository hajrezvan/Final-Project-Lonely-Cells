#ifndef FINAL_PROJECT_MENUS_H
#define FINAL_PROJECT_MENUS_H

int map_x,map_y;

//First Menu
void start_menu(void);

//Start Game
void load_menu(void);
void new_single_player_game_menu(void);
void new_multi_player_game_menu(void);
void exit_from_game_menu(void);

//New game
void number_of_cells_menu(void);

//Action menu
void action_menu(void);
void action_move_menu(void);
void action_split_a_cell_menu(void);
void action_boost_energy_menu(void);
void action_save_menu(void);

#endif
