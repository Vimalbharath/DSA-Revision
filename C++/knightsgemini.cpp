#include <iostream>
#include <vector>
using namespace std;

// Returns true if the coordinates are inside the board boundaries (0-indexed)
bool isValid(vector<vector<bool>> &board, int row, int col)
{
    return (row >= 0 && row < board.size() && col >= 0 && col < board[0].size());
}

// Check only the 4 upward knight attack positions (where we already placed knights)
bool isSafe(vector<vector<bool>> &board, int row, int col)
{
    if (isValid(board, row - 2, col - 1) && board[row - 2][col - 1])
        return false;
    if (isValid(board, row - 2, col + 1) && board[row - 2][col + 1])
        return false;
    if (isValid(board, row - 1, col - 2) && board[row - 1][col - 2])
        return false;
    if (isValid(board, row - 1, col + 2) && board[row - 1][col + 2])
        return false;

    return true;
}

int nknights(vector<vector<bool>> &board, int row, int col, int knight)
{
    // Base Case 1: All knights are successfully placed!
    if (knight == 0)
    {
        return 1; // Found 1 valid placement layout
    }

    int n = board.size();

    // Base Case 2: We reached past the last row of the board without placing all knights
    if (row >= n)
    {
        return 0;
    }

    // Calculate next coordinates (column-by-column, row-by-row)
    int nextRow = row;
    int nextCol = col + 1;
    if (nextCol >= n)
    {
        nextRow = row + 1;
        nextCol = 0;
    }

    int count = 0;

    // Option 1: Place a knight here (if safe)
    if (isSafe(board, row, col))
    {
        board[row][col] = true;                                 // Choose
        count += nknights(board, nextRow, nextCol, knight - 1); // Explore
        board[row][col] = false;                                // Backtrack
    }

    // Option 2: Skip this cell (Don't place a knight)
    count += nknights(board, nextRow, nextCol, knight);

    return count;
}

int main()
{
    cout << "N-Knights problem in C++\n";

    // 4x4 Board, trying to place 4 Knights
    int n = 4;
    vector<vector<bool>> board(n, vector<bool>(n, false));

    // Start at (row 0, col 0) with n knights to place
    int ans = nknights(board, 0, 0, n);

    cout << "Total ways: " << ans << endl;
    return 0;
}