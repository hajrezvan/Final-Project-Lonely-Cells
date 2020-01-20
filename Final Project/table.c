#include <stdio.h>

#include "table.h"
#include "menus.h"

#define SIZE_X 9
#define ROW_BLOCK_SIZE 4
#define COL_BLOCK_SIZE 8

// Use the SIZE_X for initialize visual_map
char visual_map[4*SIZE_X+1][8*SIZE_X+1];

void draw_table(void){
    int i;
    for(i = 0; i <= ROW_BLOCK_SIZE * map_y; i++)
    {
        int j;
        int k = 0;
        for(j = 0;j <= COL_BLOCK_SIZE * map_x; j++)
        {
            if (k % 8 == 0 && k != 16){
                visual_map[i][j] = '|';
            } else if (k < 8){
                if (i % 4 == 0){
                    visual_map[i][j] = '-';
                } else{
                    visual_map[i][j] = ' ';
                }
            } else if (k == 8) {
                visual_map[i][j] = '|';
            } else if (k < 16){
                if ((i + 2) % 4 == 0){
                    visual_map[i][j] = '-';
                } else{
                    visual_map[i][j] = ' ';
                }
            } else if (k == 16){
                visual_map[i][j] = '|';
                k = 0;
            }
            k++;
        }
    }
    print();
}

void print(){
    int i,j;
    for (i = 0; i <= ROW_BLOCK_SIZE * map_y; i++){
        for (j = 0; j <= COL_BLOCK_SIZE * map_x; j++) {
            printf("%c", visual_map[i][j]);
        }
        printf("\n");
    }
}
