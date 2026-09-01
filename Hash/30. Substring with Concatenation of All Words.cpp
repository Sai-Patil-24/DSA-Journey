//brute force approach
//Time: O(k! × k × m + n × k × m)
//Space: O(k! × k × m)
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        int wordLen = words[0].length();
        int totalLen = wordLen * words.size();

        unordered_map<string, int> mp;
        vector<int> ans;

        
        sort(words.begin(), words.end());

        do {
            string temp = "";

            for (string word : words) {
                temp += word;
            }

            mp[temp] = 1;

        } while (next_permutation(words.begin(), words.end()));

        
        for (int i = 0; i + totalLen <= s.length(); i++) {

            string sub = s.substr(i, totalLen);

            if (mp.count(sub)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};


