#include <stdio.h>

#include "table.h"
#include "menus.h"

#define SIZE_X map_x
#define ROW_BLOCK_SIZE 4
#define COL_BLOCK_SIZE 8

char visual_map[4*SIZE_X+1][8*SIZE_X+1];

void draw_table(void){
    int i;
    for(i = 0; i <= ROW_BLOCK_SIZE * SIZE_X; i++)
    {
        int j;
        for(j = 0;j <= COL_BLOCK_SIZE * SIZE_X; j++)
        {
            if(j % COL_BLOCK_SIZE == 0 && i % ROW_BLOCK_SIZE == 0)
                visual_map[i][j] = '+';

            else if(i % ROW_BLOCK_SIZE == 0)
            {
                if(j % 2 == 0)
                    visual_map[i][j] = '*';
                else
                    visual_map[i][j] = ' ';
            }
            else if(j%COL_BLOCK_SIZE == 0)
            {
                visual_map[i][j] = '*';
            }

            else
                visual_map[i][j] = ' ';
        }
    }
}

void print(){
    int i,j;
    for (i = 0; i <= ROW_BLOCK_SIZE * SIZE_X; i++){
        for (j = 0; j <= COL_BLOCK_SIZE * SIZE_X; j++) {
            printf("%c", visual_map[i][j]);
        }
        printf("\n");
    }
}
