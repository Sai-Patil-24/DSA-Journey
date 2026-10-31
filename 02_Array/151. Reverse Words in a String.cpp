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

optimized version:
class Solution {
public:

    string reverseWords(string s) {
        int r = s.size() - 1;
        std::string res;

        while (r >= 0) {
            while (r >= 0 && s[r] == ' ') r--;
            if (r < 0) break;

            int l = r;
            while (l >= 0 && s[l] != ' ') {
                l--;
            }

            if (!res.empty()) res += ' ';
            res += s.substr(l + 1, r - l);

            r = l;
        }

        return res;
    }
};