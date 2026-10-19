class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> sol;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                sol.push_back(i);
            }
        }

        return sol;
    }
};

// BEtter solution
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int mid_idx = nums.size() / 2;
        int mid_val = nums[mid_idx];
        vector<int> sol;

        if (target < mid_val) {
            for (int i = 0; i < mid_idx; i++) {
                if (nums[i] == target) {
                    sol.push_back(i);
                }
            }
        } else if (target > mid_val) {
            for (int i = mid_idx + 1; i < nums.size(); i++) {
                if (nums[i] == target) {
                    sol.push_back(i);
                }
            }
        } else {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    sol.push_back(i);
                }
            }
        }

        return sol;
    }
};

//optimized solution
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less_than = 0;
        int count = 0;

        for (int x : nums) {
            if (x < target) less_than++;
            else if (x == target) count++;
        }

        vector<int> sol;
        for (int i = 0; i < count; i++) {
            sol.push_back(less_than + i);
        }

        return sol;
    }
};