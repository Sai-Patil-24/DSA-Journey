/*
Problem: 66. Plus One
Link: https://leetcode.com/problems/plus-one/
Difficulty: Easy

Approach:
- Traverse from right to left and simulate addition with carry.
- If a digit is less than 9, increment it and return.
- Otherwise, set it to 0 and continue.
- If all digits are 9, insert 1 at the beginning.

Time: O(n)
Space: O(1)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};