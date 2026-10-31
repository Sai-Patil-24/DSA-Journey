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



/*
    Author: Sai Patil
    Problem: 1464. Maximum Product of Two Elements in an Array
    Platform: LeetCode
    Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

    Approach:
    1. Traverse the array once to find the largest and second largest elements.
    2. Update both values whenever a larger element is found.
    3. Compute and return (largest - 1) * (secondLargest - 1).

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int i : nums) {
            if (i > max1) {
                max2 = max1;
                max1 = i;
            } else if (i > max2) {
                max2 = i;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};