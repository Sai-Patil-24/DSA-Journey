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

