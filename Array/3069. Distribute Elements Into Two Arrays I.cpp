/*
 * LeetCode Problem: 3069. Distribute Elements Into Two Arrays I
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/description/
 *
 * Approach:
 * - Initialize two arrays, `arr1` and `arr2`.
 * - Place the first element of `nums` into `arr1` and the second element into `arr2`.
 * - Starting from the third element, compare the last elements of `arr1` and `arr2`.
 * - If `arr1.back()` is greater than `arr2.back()`, add the current element to `arr1`.
 * - Otherwise, add the current element to `arr2`.
 * - Finally, append all elements of `arr2` to `arr1` and return the combined array.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *   - `arr1` and `arr2` together store all elements of `nums`.
 */

 class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i = 2; i < n; i++) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }

        
        for (int x : arr2) {
            arr1.push_back(x);
        }

        return arr1;
    }
};