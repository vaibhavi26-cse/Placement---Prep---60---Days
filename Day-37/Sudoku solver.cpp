#include <vector>
using namespace std;

class Solution {
  public:
    bool row[9][10] = {};
    bool col[9][10] = {};
    bool box[9][10] = {};

    bool solve(vector<vector<int>> &mat) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (mat[i][j] == 0) {

                    int b = (i / 3) * 3 + (j / 3);

                    for (int num = 1; num <= 9; num++) {

                        if (!row[i][num] && !col[j][num] && !box[b][num]) {

                            mat[i][j] = num;
                            row[i][num] = true;
                            col[j][num] = true;
                            box[b][num] = true;

                            if (solve(mat))
                                return true;

                            mat[i][j] = 0;
                            row[i][num] = false;
                            col[j][num] = false;
                            box[b][num] = false;
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<int>> &mat) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (mat[i][j] != 0) {

                    int num = mat[i][j];
                    row[i][num] = true;
                    col[j][num] = true;
                    box[(i / 3) * 3 + (j / 3)][num] = true;
                }
            }
        }

        solve(mat);
    }
};