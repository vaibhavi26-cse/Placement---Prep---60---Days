#include <vector>
#include <string>
using namespace std;

class Solution {
  public:

    bool isSafe(int row, int col, vector<string> &board, int n) {

        // Upper Left Diagonal
        int r = row, c = col;
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q')
                return false;
            r--;
            c--;
        }

        // Upper Right Diagonal
        r = row;
        c = col;
        while (r >= 0 && c < n) {
            if (board[r][c] == 'Q')
                return false;
            r--;
            c++;
        }

        // Same Column
        r = row;
        while (r >= 0) {
            if (board[r][col] == 'Q')
                return false;
            r--;
        }

        return true;
    }

    void solve(int row, vector<string> &board,
               vector<vector<string>> &ans, int n) {

        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {

            if (isSafe(row, col, board, n)) {

                board[row][col] = 'Q';

                solve(row + 1, board, ans, n);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> nQueen(int n) {

        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));

        solve(0, board, ans, n);

        return ans;
    }
};