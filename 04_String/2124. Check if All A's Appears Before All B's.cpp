class Solution {
public:
    bool checkString(string s) {
        int i = 0;
        int j = 1;
        bool check = true;
        while(i<j && j<s.length())
        {
            if(s[j]=='a' && s[i]=='b') check=false;
            i++;
            j++;
        }

        return check;

    }
};