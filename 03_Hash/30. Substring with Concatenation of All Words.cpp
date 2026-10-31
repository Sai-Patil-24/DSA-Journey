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


//optimized approach
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        int n = s.length();
        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        vector<int> ans;

        unordered_map<string, int> required;

       
        for (string word : words) {
            required[word]++;
        }

       
        for (int offset = 0; offset < wordLen; offset++) {

            int left = offset;
            int right = offset;
            int count = 0;

            unordered_map<string, int> current;

            while (right + wordLen <= n) {

                
                string word = s.substr(right, wordLen);
                right += wordLen;

                
                if (required.find(word) == required.end()) {
                    current.clear();
                    count = 0;
                    left = right;
                    continue;
                }

              
                current[word]++;
                count++;

              
                while (current[word] > required[word]) {

                    string leftWord = s.substr(left, wordLen);

                    current[leftWord]--;
                    left += wordLen;
                    count--;
                }

                
                if (count == wordCount) {
                    ans.push_back(left);

                   
                    string leftWord = s.substr(left, wordLen);
                    current[leftWord]--;
                    left += wordLen;
                    count--;
                }
            }
        }

        return ans;
    }
};