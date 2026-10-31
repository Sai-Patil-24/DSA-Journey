class Solution {
public:
    string result = "";

    bool solve(string curr, vector<int> count, string target, int i, bool greater)
    {
        if(i == target.length())
        {
            if(greater)
            {
                result = curr;
                return true;
            }
            return false;
        }

        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(count[ch-'a'] == 0)
                continue;

            if(!greater && ch < target[i])
                continue;

            curr.push_back(ch);
            count[ch-'a']--;

            bool isGreater = greater || ch > target[i];

            if(solve(curr, count, target, i+1, isGreater))
                return true;

            curr.pop_back();
            count[ch-'a']++;
        }

        return false;
    }

    string lexGreaterPermutation(string s, string target)
    {
        result = "";

        vector<int> count(26, 0);

        for(char ch : s)
        {
            count[ch-'a']++;
        }

        string curr;

        solve(curr, count, target, 0, false);

        return result;
    }
};


//Better Approach
class Solution {
public:
    string ans;

    bool solve(string &target, vector<int> &cnt, string &curr, int i, bool greater) {
        int n = target.size();

        if (i == n) {
            return greater;
        }

        for (int c = 0; c < 26; c++) {
            if (cnt[c] == 0) continue;

            char ch = 'a' + c;

           
            if (!greater && ch < target[i])
                continue;

            cnt[c]--;
            curr.push_back(ch);

            bool newGreater = greater || (ch > target[i]);

            if (solve(target, cnt, curr, i + 1, newGreater)) {
                return true;
            }

            curr.pop_back();
            cnt[c]++;
        }

        return false;
    }

    string lexGreaterPermutation(string s, string target) {
        vector<int> cnt(26, 0);

        for (char ch : s) {
            cnt[ch - 'a']++;
        }

        string curr;

        if (solve(target, cnt, curr, 0, false))
            return curr;

        return "";
    }
};