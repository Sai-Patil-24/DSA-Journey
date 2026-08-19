/*
 * LeetCode Problem: 1689. Partitioning Into Minimum Number of Deci-Binary Numbers
 * Link: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
 *
 * Approach: Find the Maximum Digit
 * - A deci-binary number contains only the digits 0 and 1.
 * - To construct the given number `n`, each digit contributes at most 1
 *   from each deci-binary number.
 * - Therefore, the minimum number of deci-binary numbers required is
 *   equal to the maximum digit present in `n`.
 * - Iterate through the string and find the maximum digit.
 * - Return the maximum digit as the answer.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
class Solution {
public:
    int minPartitions(string n) {
        int max_num=INT_MIN;
        for(int i : n)
        {
            int digit = i-'0';
            max_num=max(max_num,digit);
        }

        return max_num;
    }
};

