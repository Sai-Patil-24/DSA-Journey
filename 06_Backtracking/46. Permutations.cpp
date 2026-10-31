class Solution {
public:
    void generate(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, vector<int>& freq) {
        if(nums.size() == current.size()) {
            result.push_back(current);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(!freq[i]) {
                current.push_back(nums[i]);
                freq[i]++;
                generate(nums, result, current, freq);
                freq[i]--;
                current.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<int> freq(nums.size(), 0);
        generate(nums, result, current, freq);
        return result;
    }
};