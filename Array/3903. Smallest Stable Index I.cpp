class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int index = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int left = INT_MIN;
            int right = INT_MAX;
            for (int j = 0; j <= i; j++) {
                left = max(left, nums[j]);
            }

            for (int k = i; k < n; k++) {
                right = min(right, nums[k]);
            }
            if(left-right<=k)
            {
               return i;
            }
        }

        return index;
    }
};