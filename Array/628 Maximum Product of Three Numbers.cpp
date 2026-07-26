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


/*
 * LeetCode Problem: 628. Maximum Product of Three Numbers
 * Link: https://leetcode.com/problems/maximum-product-of-three-numbers/
 *
 * Approach:
 * - Traverse the array once to track the three largest and two smallest numbers.
 * - The maximum product is either:
 *   1. The product of the three largest numbers.
 *   2. The product of the two smallest (most negative) numbers and the largest number.
 * - Return the larger of the two products.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int x : nums) {

            // Update the three largest numbers
            if (x > max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max3 = max2;
                max2 = x;
            } else if (x > max3) {
                max3 = x;
            }

            // Update the two smallest numbers
            if (x < min1) {
                min2 = min1;
                min1 = x;
            } else if (x < min2) {
                min2 = x;
            }
        }

        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};