// 1. Problem: 3Sum
// 2. Difficulty: Medium
// 3. Time Complexity: O(N²) (sorting + two-pointer search)
// 4. Space Complexity: O(1) (excluding output array)
// 5. Link: https://leetcode.com/problems/3sum/
// 6. Approach:
//    - Sort the array
//    - Fix one element and use two pointers to find the remaining pair
//    - Move pointers based on the current sum
//    - Skip duplicates to avoid repeated triplets
// 7. Type: Sorting + Two Pointers

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (total > 0) {
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
        }
        return res;        
    }
};