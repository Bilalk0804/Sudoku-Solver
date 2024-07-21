#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>
extern char POSSIBLE;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;
typedef struct box{
struct box * next;
}box;
typedef struct sqaure
{
    int number;
    /* [1] [2] [3] [4] [5] [6] [7] [8] [9] index for {possible}*/
    /* [1] [1] [0] [1] [0] [1] [1] [1] [1]  */   /*We will use {possible} and {solvable} to fill */
    int possible[9];                             /*out either 0 or 1*/
    int solvable;
    box *box;
    int row;
    int column;
}square;
int **createpuzzle();
void printpuzzle(int **puzzle);
square ***setuppuzzle(int **puzzle);

#endif