class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        return totalSum % k;
    }
};