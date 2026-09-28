class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string inter = "";

        for (char c : s) {
            if (c == ' ') {
                if (!inter.empty()) { 
                    words.push_back(inter);
                    inter = "";
                }
            } else {
                inter += c;
            }
        }

        if (!inter.empty()) {
            words.push_back(inter);
        }

        reverse(words.begin(), words.end());

        string result = "";
        for (auto &w : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += w;
        }

        return result;
    }
};