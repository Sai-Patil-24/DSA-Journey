class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        
        int n = nums.size();
        std::vector<int> r(n, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                r[i] += nums[j];
            }
        }
        return r;
    }
};