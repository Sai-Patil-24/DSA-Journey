// 1. Problem name: Sort Characters By Frequency
// 2. Difficulty level: Medium
// 3. Time complexity: O(n + k log k), Space complexity: O(n + k)
// 4. Link of this problem: https://leetcode.com/problems/sort-characters-by-frequency/
// 5. Approach: Count each character frequency, sort unique characters by frequency, then build the result string by repeating each character.
// 6. Approach Type:optimized 
class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> mp;

        for(char c : s)
            mp[c]++;

        vector<char> chars;

        for(auto &x : mp)
            chars.push_back(x.first);

        sort(chars.begin(), chars.end(),
            [&](char a, char b){
                return mp[a] > mp[b];
            });

        string ans;

        for(char c : chars)
            ans += string(mp[c], c);

        return ans;
    }
};

