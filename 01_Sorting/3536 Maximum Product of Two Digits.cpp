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

/*
 * LeetCode Problem: Maximum Product of Two Digits
 * Link: https://leetcode.com/problems/maximum-product-of-two-digits/
 *
 * Approach:
 * - Traverse the digits once while tracking the largest and second largest digit.
 * - Update both values as each digit is processed.
 * - Return the product of the two largest digits.
 *
 * Time Complexity: O(d)
 * Space Complexity: O(1)
 * where d is the number of digits.
 */

 class Solution {
public:
    int maxProduct(int n) {
        int first = -1;
        int second = -1;

        while (n > 0) {
            int digit = n % 10;

            if (digit > first) {
                second = first;
                first = digit;
            } else if (digit > second) {
                second = digit;
            }

            n /= 10;
        }

        return first * second;
    }
};