// 1. Problem: Rotate Array
// 2. Difficulty: Medium
// 3. Time Complexity: O(N)
// 4. Space Complexity: O(N)
// 5. Link: https://leetcode.com/problems/rotate-array/
// 6. Approach:
//    - Store the first (n-k) elements in a temporary array.
//    - Move the last k elements to the beginning.
//    - Copy the stored elements after them.
//    - This rotates the array right by k positions.
// 7. Type: Array Manipulation
// 8. Approach Level: Better

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        if (k == 0) return;

        vector<int> temp;

       
        for (int i = 0; i < n - k; i++) {
            temp.push_back(nums[i]);
        }

        
        for (int i = 0; i < k; i++) {
            nums[i] = nums[n - k + i];
        }

        for (int i = 0; i < n - k; i++) {
            nums[k + i] = temp[i];
        }
    }
};