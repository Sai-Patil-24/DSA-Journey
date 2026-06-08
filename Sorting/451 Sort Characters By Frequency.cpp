// 1. Problem name: Sort Characters By Frequency
// 2. Difficulty level: Medium
// 3. Time complexity: O(N log K) where N is the length of the string and K is the number of unique characters. Since the alphabet size is bounded (at most 62 unique characters for letters and digits), K is a constant, making the effective time complexity O(N).
// 4. Link of this problem: https://leetcode.com/problems/sort-characters-by-frequency/?envType=problem-list-v2&envId=bucket-sort
// 5. Approach: First, count the frequency of each character using a hash map (or a frequency array). Next, extract the unique characters and sort them using a custom comparator that orders them in descending order based on their recorded frequencies. Finally, reconstruct the result string by repeating each character according to its frequency count.
// 6. Approach Type: Optimized

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