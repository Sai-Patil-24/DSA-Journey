class Solution {
public:
    void combination(vector<string>& result, string current, int i, int n,
                     int open, int close) {
        if ( i == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
        combination(result, current + '(', i + 1, n, open + 1, close);
        }
        if (close < open) {
        combination(result, current + ')', i + 1, n, open, close + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;

        combination(result, "", 0, n, 0, 0);
        return result;
    }
};