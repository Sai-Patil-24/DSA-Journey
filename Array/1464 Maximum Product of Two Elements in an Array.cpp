/*
    Problem: 1464. Maximum Product of Two Elements in an Array
    Platform: LeetCode
    Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

    Approach:
    1. Sort the array in ascending order.
    2. The maximum product is obtained using the two largest elements.
    3. Return (largest - 1) * (secondLargest - 1).

    Time Complexity: O(n log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};