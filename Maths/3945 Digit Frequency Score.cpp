class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> hash;

        while (n > 0) {
            int digit = n % 10;
            hash[digit]++;
            n /= 10;
        }
        int sum =0;
        for (auto &it : hash) {
            int digit = it.first;
            int freq = it.second;
            sum+= digit*freq;
            
        }

        return sum;
    }
};