/*
 * LeetCode Problem: 3760. Maximum Substrings With Distinct Start
 * Link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/
 *
 * Approach:
 * - Traverse the string once.
 * - Store each character in an unordered_set to keep only unique characters.
 * - The number of unique starting characters is simply the size of the set.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(k)
 *   - k = number of distinct characters (at most the character set size).
 */

class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> set;

        for (char i : s) {
            set.insert(i);
        }

        return set.size();
    }
};