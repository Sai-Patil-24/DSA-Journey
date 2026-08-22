class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0;

        for (int num : nums) {
            if (num % 2 == 0)
                even++;
        }

        vector<int> result(nums.size());

        for (int i = 0; i < even; i++)
            result[i] = 0;

        for (int i = even; i < nums.size(); i++)
            result[i] = 1;

        return result;
    }
};