/*

Adam likes to solve mathematical puzzles and riddles. He is quite good in them. But he is new to
Sudoku, he never solved it before. Adam needs your help to solve Sudoku.

Given a partially filled 9×9 2D array ‘grid[9][9]’, the goal is to assign digits (from 1 to 9) to
 the empty cells so that every row, column, and sub grid of size 3×3 contains exactly one instance
 of the digits from 1 to 9.

Input
Input contains 9 lines of 9 space separated digits from 0 to 9(0 denotes an empty space).

Output
Output contains 9 lines of 9 space separated digits from 1 to 9 which represent solution of Sudoku.

Constraints
Already mentioned above

Example
Input:
  3 0 6 5 0 8 4 0 0
  5 2 0 0 0 0 0 0 0
  0 8 7 0 0 0 0 3 1
  0 0 3 0 1 0 0 8 0
  9 0 0 8 6 3 0 0 5
  0 5 0 0 9 0 6 0 0
  1 3 0 0 0 0 2 5 0
  0 0 0 0 0 0 0 7 4
  0 0 5 2 0 6 3 0 0


Output:
  3 1 6 5 7 8 4 9 2
  5 2 9 1 3 4 7 6 8
  4 8 7 6 2 9 5 3 1
  2 6 3 4 1 5 9 8 7
  9 7 4 8 6 3 1 2 5
  8 5 1 7 9 2 6 4 3
  1 3 8 9 4 7 2 5 6
  6 9 2 3 5 1 8 7 4
  7 4 5 2 8 6 3 1 9
*/

#include<bits/stdc++.h>
using namespace std;
#define N 9

bool find_empty_location(int grid[N][N],int &row, int &col)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(grid[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

bool is_safe_row(int grid[N][N] ,int row, int num)
{
    for(int i=0;i<N;i++)
    {
        if(grid[row][i] == num)
        {
            return false;
        }
    }
    return true;
}
bool is_safe_col(int grid[N][N] ,int col, int num)
{
     for(int i=0;i<N;i++)
    {
        if(grid[i][col] == num)
        {
            return false;
        }
    }
    return true;

}
bool is_safe_in_box(int grid[N][N] ,int row, int col, int num)
{
    int row_factor = row - (row%3);
    int col_factor = col - (col%3);


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i+row_factor][j+col_factor] == num)
            {
                return false;
            }
        }
    }
    return true;
}
bool is_safe(int grid[N][N], int row, int col, int num)
{
    if(is_safe_row(grid,row,num) && is_safe_col(grid,col,num) && is_safe_in_box(grid,row,col,num))
    {
        return true;
    }
    return false;
}
bool solve(int grid[N][N])
{
    int row,col;
    if(!find_empty_location(grid,row,col));
    {
        return true;
    }

    for(int i =1; i<=N; i++)
    {
        if(is_safe(grid,row,col,i))
        {
            grid[row][col] = i;
            if(solve(grid))
            {
                return true;
            }
        grid[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    int grid[N][N];
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            grid[i][j] = s[j] - '0';
        }

    }
    solve(grid);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}

