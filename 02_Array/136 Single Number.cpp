/*
Problem: 136. Single Number
Link: https://leetcode.com/problems/single-number/
Difficulty: Easy

Approach:
- Use XOR to cancel duplicate elements.
- The remaining value is the unique element.

Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans = nums[0];
        for(int i = 1 ; i<nums.size();i++)
        {
            ans^=nums[i];
        }

        return ans;
    }
};