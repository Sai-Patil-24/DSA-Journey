class Solution {
public:
    vector<vector<int>> result;
    void powerSet(int i, vector<int>& current, vector<int>& nums) {
        if (i == nums.size()) {
           if (find(result.begin(), result.end(), current) == result.end()) {
                result.push_back(current);
            }
            return;
        }

        current.push_back(nums[i]);
        powerSet(i + 1, current, nums);

        current.pop_back();
        powerSet(i + 1, current, nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> cur;
        powerSet(0, cur, nums);
        return result;
    }
};