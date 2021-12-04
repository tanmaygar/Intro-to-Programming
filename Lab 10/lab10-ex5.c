/*Write a program that lets the user play the 15-puzzle*/
#include <stdio.h>
#include <stdlib.h>

//character swapper
void place_swapper(char *a, char *b);

//this function swaps the position of two places
void move_swapper(char board[4][4], char move, int *return_num);

//prints the board
void print_board(char board[4][4]);

//BEGINNING OF MAIN FUNCTION
int main()
{
    char board[4][4] =
    {
        {'2','1','3','4'},
        {'5','7','6','8'},
        {'9','B','A','C'},
        {'E','D','F','0'},
    };
    char move[100];
    //char move;
    int return_num;
    printf("Play 15-puzzle, NSEW for moving the 0 space, and D for ending the game\n");
    printf("Any other character entered will result in game over\n");
    print_board(board);
    do
    {
        printf("Enter move: ");
        scanf("%s", move);
        move_swapper(board, *move, &return_num);
        print_board(board);
    }while(return_num == 1 || return_num == 2);

    return EXIT_SUCCESS;
}

//character swapper
void place_swapper(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

//this function swaps the position of two places
void move_swapper(char board[4][4], char move, int *return_num)
{
    int position_i, position_j;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(board[i][j] == '0')
            {
                position_i = i;
                position_j = j;
                //printf("%d:%d\n", position_i, position_j);
            }
        }
    }
    if(move == 'N')
    {
        if(position_i == 0)
        {
          printf("Not allowed\n");
          *return_num = 1;
        }
        else
        {
          place_swapper(&board[position_i][position_j],&board[position_i - 1][position_j]);
          *return_num = 2;
        }
    }
    else if(move == 'S')
    {
        if(position_i == 3)
        {
          printf("Not allowed\n");
          *return_num = 1;
        }
        else
        {
          place_swapper(&board[position_i][position_j],&board[position_i + 1][position_j]);
          *return_num = 2;
        }
    }
    else if(move == 'E')
    {
        if(position_j == 3)
        {
          printf("Not allowed\n");
          *return_num = 1;
        }
        else
        {
          place_swapper(&board[position_i][position_j],&board[position_i][position_j + 1]);
          *return_num = 2;
        }
    }
    else if(move == 'W')
    {
        if(position_j == 0)
        {
          printf("Not allowed\n");
          *return_num = 1;
        }
        else
        {
          place_swapper(&board[position_i][position_j],&board[position_i][position_j - 1]);
          *return_num = 2;
        }
    }
    else if(move == 'D')
    {
        printf("Done\n");
        *return_num = 3;
    }
    else
    {
        printf("Not allowed Game Over!!\n");
        *return_num = 4;
    }


}

//prints the board
void print_board(char board[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
