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