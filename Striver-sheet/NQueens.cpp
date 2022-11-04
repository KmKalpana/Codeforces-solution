#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool  Valid(int row, int col, int n, vector<string>&board)
{
     int x = row;
     int y = col;
      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = y;
      row = x;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = x;
      col = y;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
}
void solve(int col, int n, vector<string>&board)
{
    if(col==n)
     {
        for(int i=0; i<board.size(); i++)
         cout<<board[i]<<" ";
        cout<<endl;
        return ;
     }
    for(int row=0; row<n; row++)
    {
        if(Valid(row,col,n,board))
        {
           board[row][col]='Q';
           solve(col+1,n,board);
           board[row][col]='.';
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0; i<n; i++)
      board[i]=s;
    solve(0,n,board);
}