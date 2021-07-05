"""
 * @file     coinChange.py
 * @brief    
 * @author   YongDu
 * @date     2021-07-05
"""
import math
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        result = [math.inf for _ in range(amount + 1)]
        result[0] = 0

        for i in range(1, amount + 1):
            for coin in coins:
                if i >= coin:
                    result[i] = min(result[i-coin] + 1, result[i])

        return result[-1] if result[-1] != math.inf else -1
