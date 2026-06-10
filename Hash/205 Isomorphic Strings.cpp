// 1. Problem: Isomorphic Strings
// 2. Difficulty: Easy
// 3. Time Complexity: O(N), where N is the length of the strings
// 4. Space Complexity: O(1) (at most 256 character mappings)
// 5. Link: https://leetcode.com/problems/isomorphic-strings/
// 6. Approach:
//    - Use two hash maps to maintain bidirectional character mappings
//    - For each character pair, verify existing mappings are consistent
//    - If a mismatch is found, return false
//    - Otherwise, store/update the mappings and continue
// 7. Type: Hash Map (Bidirectional Mapping)
// 8. Approach Level: Optimized


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map< char , char > hash1;
        unordered_map< char , char > hash2;

        for(int i=0;i<s.length();i++){

            if(hash1.count(s[i]) && hash1[s[i]]!=t[i] || hash2.count(t[i]) && hash2[t[i]]!=s[i]) return false;

            hash1[s[i]]=t[i];
            hash2[t[i]]=s[i];
            
        }    

        return true;
    }
};