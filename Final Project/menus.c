#include "menus.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//visible for all of function
int map_x,map_y;

//First Menu:
void start_menu(void){
    system("cls");
    printf("\n");
    printf("Please select your chose: \n");
    printf("[1] Load \n");
    printf("[2] New single player game \n");
    printf("[3] New multiplayer game \n");
    printf("[4] Exit \n");

    int user_chose;
    scanf("%d",&user_chose);
    printf("\n");
    switch (user_chose) {
        case 1: {
            load_menu();
            system("cls");
            break;
        }
        case 2:{
            new_single_player_game_menu();
            system("cls");
            break;
        }
        case 3:{
            new_multi_player_game_menu();
            system("cls");
            break;
        }
        case 4:{
            exit_from_game_menu();
            system("cls");
            break;
        }
        default:{
            start_menu();
        }
    }
}

void load_menu(void){
    system("cls");
}

void new_single_player_game_menu(void){
    system("cls");
    number_of_cells_menu();
}

void new_multi_player_game_menu(void){
    system("cls");
    number_of_cells_menu();
}

void exit_from_game_menu(void){
    system("cls");
    printf("Thank you for your choose!! \n");
    sleep(1);
    return;
}

//Single or Multi player game:
void number_of_cells_menu(void){
    system("cls");
    printf("Please choose number of cells: (x*y) \n");
    scanf("%d*%d",&map_x,&map_y);
}

//Action Menu:
void action_menu(void){
    system("cls");
    printf("\n");
    printf("Please select your chose: \n");
    printf("[1] Move \n");
    printf("[2] Split a cell \n");
    printf("[3] Boost energy \n");
    printf("[4] Save \n");
    printf("[5] Exit \n");

    int user_chose;
    scanf("%d",&user_chose);
    printf("\n");

    switch (user_chose) {
        case 1: {
            action_move_menu();
            break;
        }
        case 2:{
            action_split_a_cell_menu();
            break;
        }
        case 3:{
            action_boost_energy_menu();
            break;
        }
        case 4:{
            action_save_menu();
            break;
        }
        case 5:{
            exit_from_game_menu();
            break;
        }
        default:{
            action_menu();
        }
    }
}

void action_move_menu(void){
    system("cls");
    printf("\n");
    printf("Please select your choose: \n");
    printf("[1] North \n");
    printf("[2] South \n");
    printf("[3] Northeast \n");
    printf("[4] Northwest \n");
    printf("[5] Southeast \n");
    printf("[6] Southwest \n");
    printf("\n");

    int user_chose;
    scanf("%d",&user_chose);
    // User move
    /*
    switch (user_chose) {
        case 1: {

            break;
        }
        case 2:{

            break;
        }
        case 3:{
            break;
        }
        case 4:{
            break;
        }
        case 5:{
            break;
        }
        default:{
        }
    }*/
}

void action_split_a_cell_menu(void){
    system("cls");

}

void action_boost_energy_menu(void){
    system("cls");

}

void action_save_menu(void){
    system("cls");

}
