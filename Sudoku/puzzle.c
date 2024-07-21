#include "sudoku.h"
square ***setuppuzzle(int **puzzle)
{
    square ***sudoku;
    sudoku = (square ***)malloc(sizeof(square **) * 9);
    /*looping through the rows*/
    for (int i = 0; i < SIZE_ROWS; i++)
    {
        /*malloc space for each rows*/
        sudoku[i] = (square **)malloc(sizeof(square *) * 9);
        /*looping through the columns*/
        for (int j = 0; j < SIZE_COLUMNS; j++)
        {
            /*malloc space for each columns*/
            sudoku[i][j] = (square *)malloc(sizeof(square) * 9);
            /*assigning number to sudoku adt*/
            sudoku[i][j]->number = puzzle[i][j];
            /*assiging rows and columns nos to each square*/
            sudoku[i][j]->row = i;
            sudoku[i][j]->column = j;
            for(int x=0;x<SIZE_ROWS;x++)
            {
                sudoku[i][j]->possible[x]=0;
            }
            
        }
    }

    for (int i = 0; i < SIZE_ROWS; i++)
    {
       
        for (int j = 0; j < SIZE_COLUMNS; j++)
        {
            if(sudoku[i][j]->number!=0)
            {
                sudoku[i][j]->solvable=0;
                updatesudoku(sudoku,i,j);
            }
        }
    }
}


int updatesudoku(square ***sudoku, int row, int column)
{
    int number;
    
}




int ** createpuzzle()
{
    int ** puzzle;
    int arr[9][9]={ 0,1,9,   0,0,2,    0,0,0,
                    4,7,0,   6,9,0,    0,0,1,
                    0,0,0,   4,9,0,    0,9,0,

                    8,9,4,   5,0,7,    0,0,0,
                    0,0,0,   0,0,0,    0,0,0,
                    0,0,0,   2,0,1,    9,5,8,

                    0,5,0,   0,6,0,    0,0,0,
                    9,0,0,   0,2,8,    0,7,9,
                    0,0,0,   1,0,0,    8,6,0,
                   };
   puzzle = (int**) malloc(sizeof(int*) * 9);

   for (int i = 0; i < SIZE_ROWS; i++)
   {
       puzzle[i] = (int *)malloc(sizeof(int) * 9);
       for (int j = 0; j < SIZE_COLUMNS; j++)
       {
           puzzle[i][j] = arr[i][j];
       }
   }
   return puzzle;
}
void printpuzzle(int **puzzle)
{
    printf("-----------------------------------");
    printf("\n");
    for (int i = 0; i < SIZE_ROWS; i++)
    {
        for (int j = 0; j < SIZE_COLUMNS; j++)
        {
            printf("%d  ", puzzle[i][j]);
            if ((j + 1) % 3 == 0)
            {
                printf(" | ");
            }
        }
        printf("\n\n");
        if ((i + 1) % 3 == 0)
        {
            printf("-----------------------------------");
            printf("\n\n");
        }
    }
}

