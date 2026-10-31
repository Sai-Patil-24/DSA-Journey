/*
 * LeetCode Problem: 2011. Final Value of Variable After Performing Operations
 * Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
 *
 * Approach:
 * - Initialize the variable `X` with 0.
 * - Traverse through each operation in the given array.
 * - If the operation is `++X` or `X++`, increment `X` by 1.
 * - If the operation is `--X` or `X--`, decrement `X` by 1.
 * - Return the final value of `X`.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *   - No additional space is used apart from the variable storing the result.
 */
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int initial=0;
    for(string i : operations)
    {
        if(i=="--X") --initial;
        if(i=="X++") initial++;
        if(i=="++X")initial++;
        if(i=="X--")initial--;
    }
    return initial;
    }
};