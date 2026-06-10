// 1. Problem: Ransom Note
// 2. Difficulty: Easy
// 3. Time Complexity: O(N + M), where N = ransomNote.length() and M = magazine.length()
// 4. Space Complexity: O(1) (at most 26 unique lowercase letters; O(K) if considering hash map keys)
// 5. Link: https://leetcode.com/problems/ransom-note/
// 6. Approach:
//    - Count character frequencies in magazine
//    - Traverse ransomNote and check availability of each character
//    - Decrease frequency after using a character
//    - Return false if any character is unavailable
// 7. Type: Hash Map (Frequency Counting)
// 8. Approach Level: Better

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hash;

        for(char i :magazine ){
            hash[i]++;
        }

        for (char j :ransomNote ){
            if(hash[j]<=0) return false;
            hash[j]--;
        }

        return true;

    }
};