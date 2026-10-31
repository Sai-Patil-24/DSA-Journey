class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string result = "";
        bool found = false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '1')
                continue;

            int count = 0;
            string result1 = "";

            for (int j = i; j < s.length(); j++) {
                result1 += s[j];

                if (s[j] == '1')
                    count++;

                if (count > k)
                    break;

                if (count == k) {
                    if (!found ||
                        result1.length() < result.length() ||
                        (result1.length() == result.length() &&
                         result1 < result)) {
                        result = result1;
                        found = true;
                    }
                }
            }
        }

        return result;
    }
};


// Optimal Approach
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        vector<int> pos;

        // Store positions of all 1s
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                pos.push_back(i);
            }
        }

        // Not enough 1s
        if (pos.size() < k)
            return "";

        string ans = "";

        // Every consecutive group of k ones
        for (int i = 0; i + k - 1 < pos.size(); i++) {

            int start = pos[i];
            int end = pos[i + k - 1];

            string cur = s.substr(start, end - start + 1);

            if (ans == "" ||
                cur.size() < ans.size() ||
                (cur.size() == ans.size() && cur < ans)) {

                ans = cur;
            }
        }

        return ans;
    }
};