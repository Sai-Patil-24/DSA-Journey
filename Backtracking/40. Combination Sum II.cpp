class Solution {
public:
    void combination(int index, vector<int>& candidates, int sum, int target,vector<vector<int>>& result, int n, vector<int>& current) {
        if (index == n) {
            if (sum == target) {
                if (find(result.begin(), result.end(), current) ==
                    result.end()) {
                    result.push_back(current);
                }
            }
            return;
        }

        current.push_back(candidates[index]);
        sum += candidates[index];
        combination(index + 1, candidates, sum, target, result, n, current);

        sum -= candidates[index];
        current.pop_back();
        combination(index + 1, candidates, sum, target, result, n, current);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());

        combination(0, candidates, 0, target, result, n, current);

        return result;
    }
};