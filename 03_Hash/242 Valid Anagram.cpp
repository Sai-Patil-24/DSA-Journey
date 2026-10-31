// Approach:
// 1. If lengths differ, strings cannot be anagrams.
// 2. Store frequency of each character from string 's' in a hash map.
// 3. Traverse string 't' and decrease corresponding frequencies.
// 4. If any required character is missing, return false.
// 5. Verify all frequencies become 0.
// Time Complexity: O(n)
// Space Complexity: O(1)  // O(26) for lowercase English letters

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>hash;
        if(s.length()!=t.length()) return false;

        for(int i =0 ; i<s.length() ; i++){
            hash[s[i]]++;
        }

        for(int i=0 ; i<s.length() ;i++){
            if(hash.count(t[i])) hash[t[i]]--;
            if(hash.count(t[i])==0) return false;
        }

        for(int i=0 ; i<s.length() ;i++){
            if(hash[s[i]]!=0)return false;
        }

        return true;
    }
};