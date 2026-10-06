class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_length = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int current_length = 0;
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                current_length++;
                if (sum >= target) {
                    min_length = min(min_length, current_length);
                    break;
                }
            }
        }

        return min_length == INT_MAX ? 0 : min_length;
    }
};