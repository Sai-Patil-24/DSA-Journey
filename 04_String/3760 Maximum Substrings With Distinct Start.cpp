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


/*
 * LeetCode Problem: 3760. Maximum Substrings With Distinct Start
 * Link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/
 *
 * Approach 2: Boolean Array (Frequency Tracking)
 * - Since the string contains only lowercase English letters ('a' to 'z'),
 *   use a boolean array of size 26 to track whether a character has appeared.
 * - For each character, calculate its index using (s[i] - 'a').
 * - If the character has not been seen before, mark it as seen and increment
 *   the distinct character count.
 * - Return the final count of unique characters.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 *   - Uses a fixed-size array of 26 elements regardless of the input size.
 */

 class Solution {
public:
    int maxDistinct(string s) {
        bool seen[26] = {false};
        int count = 0;
        for (int i=0; i<s.size(); i++) {
            int idx = s[i] - 'a';
            if (!seen[idx]) {
                seen[idx] = true;
                count += 1;
            }
        }
        return count;
    }
};