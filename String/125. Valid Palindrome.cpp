//BRUTE FORCE APPROACH
class Solution {
public:
    bool isPalindrome(string s) {
        string transform="";
        for(char c : s)
        {
            if(isalnum(c))
            {   
                transform+=tolower(c);
            }
        }
        int i = 0;
        int j = transform.length()-1;

        while(i<=j)
        {
            if(transform[i]==transform[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};

//OPTIMIZED APPROACH
class Solution {
public:
    bool valid(char ch) {
        if (ch >= '0' && ch <= '9') {
            return true;
        }
        if (ch >= 'a' && ch <= 'z') {
            return true;
        }
        if (ch >= 'A' && ch <= 'Z') {
            return true;
        }
        return false;
    }
    string transform(string s) {
        string transformed = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if(valid(c)) {
                if (c >= 'A' && c <= 'Z') {
                    c = c - 'A' + 'a';
                }
                transformed += c;
            }
            
        }

        return transformed;
    }
    bool isPalindrome(string s) {
        string transformed = transform(s);
        int i = 0;
        int j = transformed.length() - 1;
        while (i <= j) {
            if (transformed[i] != transformed[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

}
;