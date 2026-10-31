class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hash;
        for (int i = 0; i < s.length(); i++)
        {
            hash[s[i]]++;
        }

        int max_length = 0;
        bool hasOdd = false;

        for (auto& p : hash)
        {
            int count = p.second;

            if (count % 2 == 0)
            {
                max_length += count;
            }

            if (count % 2 != 0)
            {
                max_length += count - 1;
                hasOdd = true;
            }
        }

        if (hasOdd) max_length += 1;

        return max_length;
    }
};