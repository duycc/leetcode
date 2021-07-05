/**
 * @file     uniquePaths.cpp
 * @brief
 * @author   YongDu
 * @date     2021-07-06
 */
class Solution {
  public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> result(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (0 == i || 0 == j) {
                    result[i][j] = 1;
                } else {
                    result[i][j] = result[i - 1][j] + result[i][j - 1];
                }
            }
        }
        return result[m - 1][n - 1];
    }
};
