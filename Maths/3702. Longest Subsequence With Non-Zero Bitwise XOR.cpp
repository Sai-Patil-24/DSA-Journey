// 1. Problem name: Longest Subsequence With Non-Zero Bitwise XOR
// 2. Difficulty level: Easy
// 3. Time complexity: O(n)
// 4. Space complexity: O(1)
// 5. Link: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
// 6. Approach: Bitwise XOR / Greedy
// 7. Approach Type: Optimal
// 8. Key idea: If total XOR is non-zero, answer is n. If XOR is zero but
//    there is a non-zero element, remove one element and answer is n - 1.
//    If all elements are zero, answer is 0.

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalXor = 0;

        bool hasNonZero = false;

        for (int x : nums) {
            totalXor ^= x;

            if (x != 0) {
                hasNonZero = true;
            }
        }

        if (totalXor != 0) {
            return n;
        }

        if (hasNonZero) {
            return n - 1;
        }

        return 0;
    }
};