class Solution {
public:
    void powerSet(int index , vector<int>& nums , vector<vector<int>>&result , vector<int>current,int n)
    {
        if(index==n)
        {
            result.push_back(current);
            return ;
        }
        current.push_back(nums[index]);
        powerSet(index+1 , nums , result,current,n);

        current.pop_back();
        powerSet(index+1 , nums , result , current , n);    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        int n = nums.size();
        powerSet(0,nums,result,current,n);

        return result;
    }
};


// Simple Approach
class Solution {
public:
    vector<vector<int>> result;
    void powerSet(int i, vector<int>&current, vector<int>& nums) {
        if (i == nums.size()) {
            result.push_back(current);
            return;
        }

        current.push_back(nums[i]);
        powerSet(i + 1, current, nums);

        current.pop_back();
        powerSet(i + 1, current, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        powerSet(0, cur, nums);
        return result;
    }
};