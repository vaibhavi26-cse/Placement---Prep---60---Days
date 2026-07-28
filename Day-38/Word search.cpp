#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
  
    bool dfs(vector<vector<char>> &mat, string &word,
             int row, int col, int index) {

        // Entire word found
        if (index == word.length())
            return true;

        // Out of bounds or mismatch
        if (row < 0 || row >= mat.size() ||
            col < 0 || col >= mat[0].size() ||
            mat[row][col] != word[index])
            return false;

        char ch = mat[row][col];
        mat[row][col] = '#';   // Mark as visited

        bool found =
            dfs(mat, word, row + 1, col, index + 1) ||
            dfs(mat, word, row - 1, col, index + 1) ||
            dfs(mat, word, row, col + 1, index + 1) ||
            dfs(mat, word, row, col - 1, index + 1);

        mat[row][col] = ch;    // Backtrack

        return found;
    }

    bool isWordExist(vector<vector<char>> &mat, string &word) {

        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (mat[i][j] == word[0]) {

                    if (dfs(mat, word, i, j, 0))
                        return true;
                }
            }
        }

        return false;
    }
};