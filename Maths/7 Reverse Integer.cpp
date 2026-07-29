/*
    Author: Sai Patil
    Problem: 7. Reverse Integer
    Platform: LeetCode
    Link: https://leetcode.com/problems/reverse-integer/

    Approach:
    - Extract each digit from the number using the modulo (%) operator.
    - Reverse the number by repeatedly appending extracted digits.
    - Check for 32-bit integer overflow before returning the result.
    - Return 0 if the reversed integer exceeds the valid integer range.

    Time Complexity: O(log10 n)
    Space Complexity: O(1)
*/
class Solution {
public:
    int reverse(int x) {
        long long ans = 0;

        while (x != 0) {
            int digit = x % 10;
            ans = ans * 10 + digit;

            if (ans > INT_MAX || ans < INT_MIN)
                return 0;

            x /= 10;
        }

        return ans;
    }
};
