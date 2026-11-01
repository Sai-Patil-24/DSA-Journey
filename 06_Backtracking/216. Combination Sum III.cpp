class Solution {
public:
    void backtrack(int target, int startIndex, int k,
                   vector<int>& combination,
                   vector<vector<int>>& combinations) {
        if (target == 0 && k == 0) {
            combinations.push_back(combination);
            return;
        }
        if (k == 0) return;

        for (int i = startIndex; i <= 9; i++) {
            if (target >= i) {
                combination.push_back(i);
                backtrack(target - i, i + 1, k - 1,
                          combination, combinations);
                combination.pop_back();
            } else {
                break;
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> combinations;
        vector<int> combination;
        backtrack(n, 1, k, combination, combinations);
        return combinations;
    }
};