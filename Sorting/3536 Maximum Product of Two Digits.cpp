/*
 * LeetCode Problem: 3643. Flip Square Submatrix Vertically (replace with the correct problem number/title if different)
 * Link: https://leetcode.com/problems/maximum-product-of-two-digits/
 *
 * Approach:
 * - Extract all digits from the number into a vector.
 * - Sort the digits in ascending order.
 * - Return the product of the two largest digits.
 *
 * Time Complexity: O(d log d)
 * Space Complexity: O(d)
 * where d is the number of digits in the input number.
 */

class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;

        while (n > 0) {
            nums.push_back(n % 10);
            n /= 10;
        }

        sort(nums.begin(), nums.end());

        int s = nums.size();

        if (s < 2)
            return nums[0];

        return nums[s - 1] * nums[s - 2];
    }
};