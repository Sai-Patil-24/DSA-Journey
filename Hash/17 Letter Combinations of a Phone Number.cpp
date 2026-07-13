class Solution {
private:
    void func(int ind, string s, vector<string> &ans, unordered_map<char,string> &mp, string &digits){
        if(ind == digits.size()){
            ans.push_back(s);
            return;
        }
        for(char ch : mp[digits[ind]]){
            func(ind + 1, s + ch, ans, mp, digits);  
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {}; // Handle empty input edge case
        
        unordered_map<char,string> mp={
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9',a "wxyz"}
        };
        vector<string> ans;
        func(0, "", ans, mp, digits);
        return ans;
    }
};