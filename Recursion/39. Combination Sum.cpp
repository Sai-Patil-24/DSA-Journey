class Solution {
public:
    void combination (int index, vector<int>& candidates , int sum  , int target ,vector<vector<int>>& result ,int n , vector<int>&current )
    {   

        if(sum>target) return;
        if(index==n) 
        {
            if(sum==target) 
            {
                result.push_back(current);
            }

            return;
        }
        
        current.push_back(candidates[index]);
        sum+=candidates[index];
        combination(index,candidates,sum,target,result,n,current);

        sum-=candidates[index];
        current.pop_back();
        combination(index+1,candidates,sum,target,result,n,current);



    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>current;
        int n = candidates.size();
        combination(0,candidates ,0,target,result,n,current);

        return result;
    }
};