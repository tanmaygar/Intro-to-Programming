/*Write a program to solve the n-queens problem,*/
#include <stdio.h>
#include <stdlib.h>

//prints the board
void print_board(int N, int board_arr[N][N]);

//this function checks if the queen placed is being attacked by a queen placed in the upper left diagonal, lower left diagonal, and the same row
int taken_queen(int N, int board_arr[N][N], int row, int col);

//recursion for moving towards right
int check_queen(int N, int board_arr[N][N], int col, int num_queen);

//BEGINNING OF MAIN FUNCTION
int main()
{
  int N;
  //N= 4;
  printf("Enter the value of N: ");
  scanf("%d", &N);
  int board_arr[N][N];
  for(int i = 0; i < N; i++)
  {
      for(int j = 0; j < N; j++)
      {
          board_arr[i][j] = 0;
      }
  }
  print_board(N, board_arr);    //printing original board as reference
  printf("Solutions: \n");
  //prints solutions
  int num_queen = 0;

  if(check_queen(N, board_arr, 0, num_queen) == 1)


  return EXIT_SUCCESS;
}

//prints the board
void print_board(int N, int board_arr[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ", board_arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//this function checks if the queen placed is being attacked by a queen placed in the upper left diagonal, lower left diagonal, and the same row
int taken_queen(int N, int board_arr[N][N], int row, int col)
{
    int row_check = 1, up_diag_check = 1, down_diag_check = 1;
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if(board_arr[i][j] == 2)  //checks for upper diagonal
        {
            up_diag_check = 0;    //if it is attacked by queen then 0
            break;
        }
      /*if(board_arr[row][j] == 2)
      {
          row_check = 0;
          break;
      }*/
    }
    for(int i = 0; i < col; i++)
    {
        if(board_arr[row][i] == 2)      //checks for row
        {
            row_check = 0;                //if it is attacked by queen then 0
        }
    }
    for(int i = row, j = col; i < N && j >= 0; i++, j--)
    {
        if(board_arr[i][j] == 2)       //checks for lower diagonal
        {
            down_diag_check = 0;      //if it is attacked by queen then 0
            break;
        }
    }

    int union_case = row_check * down_diag_check * up_diag_check;
    if(union_case == 1)
    {
        return 1;       //indicates that queen is not attacked by other queens
    }
    else
    {
        return 0;       //indicates that queen is attacked by other queens
    }
}

//recursion for moving towards right
int check_queen(int N, int board_arr[N][N], int col, int num_queen)
{
    if(col >= N)
    {
        print_board(N, board_arr);  //prints board for base condition for recursion
    }
    else
    {
        for(int r = 0; r < N; r++)
        {
            if(taken_queen(N, board_arr, r, col) == 1)
            {
                board_arr[r][col] = 2;                  //sets queen as 2
                num_queen++;
                if(check_queen(N, board_arr, col + 1, num_queen) == 1)  //checks for recursion coming out to be true
                {
                    return 1;           //satisfied condition for queens
                }
                else
                {
                    board_arr[r][col] = 0;  //condition was not satisfied so changes it back to 0
                }
            }
        }
    }
    return 0;
}

















/*
#include <stdio.h>
#include <stdlib.h>

void print_board(int N, int board_arr[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ", board_arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void take_queen(int N, int board_arr[N][N], int row, int col)
{
  board_arr[row][col] = 2;
  for(int i = row, j = col; i < N && j < N; i++, j++)
  {
      if(board_arr[i][j] == 0)
      {
          board_arr[i][j] = 1;
      }
  }
  for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
  {
      if(board_arr[i][j] == 0)
      {
          board_arr[i][j] = 1;
      }
  }
  for(int i = row, j = col; i < N || j < N; i++, j++)
  {
      if(board_arr[i][col] == 0)
      {
          board_arr[i][col] = 1;
      }
      if(board_arr[row][j] ==0)
      {
          board_arr[row][j] = 1;
      }
  }
  for(int i = row, j = col; i >=0 || j >= 0; i--, j--)
  {
      if(board_arr[i][col] == 0)
      {
          board_arr[i][col] = 1;
      }
      if(board_arr[row][j] ==0)
      {
          board_arr[row][j] = 1;
      }
  }
  for(int i = row, j = col; i < N && j >= 0; i++, j--)
  {
      if(board_arr[i][j] == 0)
      {
          board_arr[i][j] = 1;
      }
  }
  for(int i = row, j = col; j < N && i >= 0; j++, i--)
  {
      if(board_arr[i][j] == 0)
      {
          board_arr[i][j] = 1;
      }
  }

}

void reset_board(int N, int board_arr[N][N])
{
    for(int i = 0; i < N; i++)
  {
      for(int j = 0; j < N; j++)
      {
          board_arr[i][j] = 0;
      }
  }
}











int main()
{
  int N;
  printf("Enter the value of N: \n");
  //scanf("%d", &N);
  N = 4;
  int board_arr[N][N];
  for(int i = 0; i < N; i++)
  {
      for(int j = 0; j < N; j++)
      {
          board_arr[i][j] = 0;
      }
  }
  print_board(N, board_arr);
  int num_queen = 0;
  /*for(int col = 0; col < N; col++)
  {
      for(int row = 0; row < N; row++)
      {
          board_arr[row][col] = 2;
          take_queen(N, board_arr, col, row);
          break;
      }
      break;
  }
*//*
  take_queen(N, board_arr, 1, 0);
  print_board(N, board_arr);

  return EXIT_SUCCESS;
}
*/
