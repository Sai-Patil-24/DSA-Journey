/*
 * LeetCode Problem: 628. Maximum Product of Three Numbers
 * Link: https://leetcode.com/problems/maximum-product-of-three-numbers/
 *
 * Approach:
 * - Sort the array in ascending order.
 * - The maximum product is either:
 *   1. The product of the three largest numbers.
 *   2. The product of the two smallest (most negative) numbers and the largest number.
 * - Return the larger of the two products.
 *
 * Time Complexity: O(n log n)
 * Space Complexity: O(1)
 */
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int option2 = nums[0] * nums[1] * nums[n - 1];

        return max(option1, option2);
    }
};