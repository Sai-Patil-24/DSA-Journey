/*
    LeetCode 344. Reverse String
    https://leetcode.com/problems/reverse-string/

    Approach:
    - Use the two-pointer technique.
    - Initialize one pointer at the beginning of the array and the other at the end.
    - Swap the characters at both pointers.
    - Move the left pointer forward and the right pointer backward.
    - Continue until both pointers meet or cross.
    - Since the string is modified directly, no extra space is required.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {

        int start = 0;
        int end = s.size() - 1;

        while (start <= end) {

            swap(s[start], s[end]);

            start++;
            end--;
        }
    }
};