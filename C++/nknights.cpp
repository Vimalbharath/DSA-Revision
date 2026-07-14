#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<bool>> &board, int row, int col)
{
    if (row >= 0 && row < board.size() && col >= 0 && col < board[0].size())
    {
        return true;
    }
    return false;
}

bool isSafe(vector<vector<bool>> &board, int row, int col)
{

    if (isValid(board, row + 1, col + 2) && board[row + 1][col + 2])
    {
        return false;
    }
    if (isValid(board, row + 2, col + 1) && board[row + 2][col + 1])
    {
        return false;
    }
    if (isValid(board, row + 1, col - 2) && board[row + 1][col - 2])
    {
        return false;
    }
    if (isValid(board, row + 2, col - 1) && board[row + 2][col - 1])
    {
        return false;
    }
    return true;
}

int nknights(vector<vector<bool>> &board, int row, int col, int knight)
{
    if (knight == 0)
    {
        return 1;
    }
    if (row < 0)
    {
        return 0;
    }
    int count = 0;
    if (col < 0)
    {
        count += nknights(board, row - 1, 3, knight);
        return count;
    }
    if (isSafe(board, row, col))
    {
        board[row][col] = true;
        count = count + nknights(board, row, col - 1, knight - 1);
        board[row][col] = false;
    }

    count = count + nknights(board, row, col - 1, knight);

    // cout << count;
    return count;
}

int main()
{
    cout << "N-Knights problem in C++";
    vector<vector<bool>> board(4, vector<bool>(4, false));
    int ans = nknights(board, 3, 3, 4);
    cout << ans;
    return 0;
}