// 1. Problem name: Contains Duplicate III
// 2. Difficulty level: Hard
// 3. Time complexity: O(n^2), Space complexity: O(1)
// 4. Link of this problem: https://leetcode.com/problems/contains-duplicate-iii/
// 5. Approach: Use nested loops to check every pair of elements. For each pair, verify if the absolute difference between their indices is within indexDiff and the absolute difference between their values is within valueDiff.
// 6. Approach Type: brute force
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i; j < nums.size(); j++) {
                if (i != j) {
                    if (abs(i - j) <= indexDiff) {
                        if (abs(nums[i] - nums[j]) <= valueDiff)
                            return true;
                    }
                }
            }
        }
        return false;
    }
};