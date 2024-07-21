#include "sudoku.h"
char POSSIBLE =0x1FF;
int SIZE_ROWS=9;
int SIZE_COLUMNS=9;
int main()
{
    int **puzzle;
    square ***sudoku;
    puzzle = createpuzzle();
    printpuzzle(puzzle);
    setuppuzzle(puzzle);
    return 0;
}