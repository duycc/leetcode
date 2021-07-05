"""
 * @file     uniquePaths.py
 * @brief    
 * @author   YongDu
 * @date     2021-07-06
"""


class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        result = [[0 for i in range(n)] for j in range(m)]
        for i in range(m):
            for j in range(n):
                if 0 == i or 0 == j:
                    result[i][j] = 1
                else:
                    result[i][j] = result[i-1][j] + result[i][j-1]

        return result[m-1][n-1]
