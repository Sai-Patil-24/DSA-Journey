class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        vector<bool> available(n + 1, false);
        for (int i = 0; i < nums.size(); i++) {
            available[nums[i]]=true;
        }

        for (int i = 0; i <= nums.size(); i++) {
            if (available[i] == false)
                return i;
        }

        return 0;
    }
};