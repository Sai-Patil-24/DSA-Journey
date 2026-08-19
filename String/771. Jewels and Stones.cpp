/*
 * LeetCode Problem: 771. Jewels and Stones
 * Link: https://leetcode.com/problems/jewels-and-stones/
 *
 * Approach: String Search
 * - Iterate through each character in the `stones` string.
 * - Check whether the current character exists in the `jewels` string.
 * - If it exists, increment the count.
 * - Return the total number of characters in `stones` that are jewels.
 *
 * Time Complexity: O(n × m)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char i :stones )
        {
            if(jewels.contains(i))count++;
        }

        return count;
    }
};