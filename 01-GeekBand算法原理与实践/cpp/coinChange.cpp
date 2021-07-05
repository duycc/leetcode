/**
 * @file     coinChange.cpp
 * @brief
 * @author   YongDu
 * @date     2021-07-05
 */
class Solution {
  public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> result(amount + 1, INT_MAX);
        result[0] = 0;
        int coinNums = coins.size();

        for (int i = 1; i <= amount; ++i) {
            for (int j = 0; j < coinNums; ++j) {
                if (i - coins[j] >= 0 && result[i - coins[j]] != INT_MAX) {
                    result[i] = std::min(result[i], result[i - coins[j]] + 1);
                }
            }
        }
        if (INT_MAX == result[amount]) {
            return -1;
        }
        return result[amount];
    }
};
