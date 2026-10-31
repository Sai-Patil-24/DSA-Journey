/*
    Author: Sai Patil
    Problem: 3517. Smallest Palindromic Rearrangement I
    Platform: LeetCode
    Link: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/

    Approach:
    1. Count the frequency of each character using a hash map.
    2. Build the left half of the palindrome by taking half of each character's frequency
       in alphabetical order.
    3. If a character has an odd frequency, place it in the middle.
    4. Reverse the left half to form the right half.
    5. Concatenate left + middle + right to obtain the lexicographically smallest palindrome.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> freq;

        for (char ch : s)
            freq[ch]++;

        string left = "", mid = "";

        for (char ch = 'a'; ch <= 'z'; ch++) {
            left += string(freq[ch] / 2, ch);

            if (freq[ch] % 2)
                mid = ch;
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};