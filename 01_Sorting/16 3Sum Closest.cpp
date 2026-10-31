/*
 * LeetCode 16. 3Sum Closest
 * https://leetcode.com/problems/3sum-closest/
 *
 * Given an integer array nums and an integer target, find three integers
 * in nums such that the sum is closest to target. Return the sum of the
 * three integers. Assume each input has exactly one solution.
 *
 * Approach: Sort the array, then fix one element and use two pointers
 * (left, right) to scan the remaining elements for the sum closest to
 * target. Move left/right based on whether the current sum is less than
 * or greater than target. Skip duplicate values of the fixed element to
 * avoid redundant work.
 *
 * Time Complexity:  O(n^2)  -- O(n log n) sort + O(n^2) two-pointer scan
 * Space Complexity: O(1)    -- ignoring sort's internal space
 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int closestSum = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1, right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }
                
                if (sum == target) {
                    return sum;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return closestSum;
    }
};