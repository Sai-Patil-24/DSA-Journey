/*
    Problem: 2942. Find Words Containing Character
    Platform: LeetCode
    Link: https://leetcode.com/problems/find-words-containing-character/

    Approach:
    1. Traverse each word in the given list.
    2. Check every character of the current word.
    3. If the target character is found, store the word's index in the result
       and stop checking the remaining characters of that word.
    4. Return the list of all matching indices.

    Time Complexity: O(n * m)
    // n = number of words, m = maximum length of a word

    Space Complexity: O(1)
    // Excluding the output vector
*/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].length(); j++) {
                if (words[i][j] == x) {
                    result.push_back(i);
                    break;   // No need to check the rest of the word
                }
            }
        }

        return result;
    }
};