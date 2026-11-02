
class Solution {
public:

    bool ispalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    void check(string &s, int start,
               vector<string> &current,
               vector<vector<string>> &result) {

       
        if (start == s.length()) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < s.length(); i++) {

            if (ispalindrome(s, start, i)) {

               
                current.push_back(s.substr(start, i - start + 1));

             
                check(s, i + 1, current, result);

               
                current.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> result;
        vector<string> current;

        check(s, 0, current, result);

        return result;
    }
};
