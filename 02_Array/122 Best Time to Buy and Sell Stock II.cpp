// 1. Problem: Best Time to Buy and Sell Stock II
// 2. Difficulty: Medium
// 3. Time Complexity: O(N), where N = prices.length()
// 4. Space Complexity: O(1)
// 5. Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// 6. Approach:
//    - We are allowed to perform multiple transactions.
//    - Instead of finding every buy and sell point explicitly,
//      capture every profitable increase between consecutive days.
//    - If prices[i] > prices[i-1], add the difference to profit.
//    - Summing all positive differences is equivalent to buying at
//      every local minimum and selling at every local maximum.
//    - This greedy approach guarantees the maximum possible profit.
// 7. Type: Array (Greedy)
// 8. Approach Level: Optimal

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;

        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};