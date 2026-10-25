class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int m = 0;
        for(string& sentence : sentences)
        {
            int spaces = 0;
            for(char ch : sentence)
            {
                if( ch == ' ')
                {
                    spaces++;
                }
            }
            count = spaces + 1;
            m = max(m,count);
        }
        return m;
    }
};