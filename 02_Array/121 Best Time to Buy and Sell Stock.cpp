// 1. Problem name: Best Time to Buy and Sell Stock
// 2. Difficulty level: Easy
// 3. Time complexity: O(n) where n is the number of days (prices). Your current implementation uses two separate passes, making it O(n) + O(n) = O(n).
// 4. Link of this problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// 5. Approach: Dynamic Programming / Prefix Minimums (with O(n) extra space).
// 6. Approach Type: Better

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>min_price(n);
        min_price[0]=prices[0];
        for(int i = 1 ; i<n ;i++)
        {
            min_price[i]=min(min_price[i-1],prices[i]);
        }

        int profit = 0;
        for(int j =0;j<n;j++)
        {
            int current = prices[j]-min_price[j];
            profit=max(profit,current);
        }

        if(profit<=0)return 0;
        
        return profit;

    }
};

// 1. Problem name: Best Time to Buy and Sell Stock
// 2. Difficulty level: Easy
// 3. Time complexity: $O(n)$
//    Space complexity: $O(1)$
// 4. Link of this problem: Best Time to Buy and Sell Stock - LeetCode
// 5. Approach: Iterates through prices, updating the minimum price seen so far and tracking the maximum profit possible by selling on the current day.
// 6. Approach Type: Optimized

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {

            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
