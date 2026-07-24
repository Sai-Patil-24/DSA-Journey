class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0 ;i<nums.size();i++)
        {
            for(int j=0 ; j<nums.size(); j++)
            {
                if(nums[i]<nums[j])swap(nums[i],nums[j]);
            }
        } 
    }
};


/*
 * LeetCode Problem: 75. Sort Colors
 * Link: https://leetcode.com/problems/sort-colors/
 *
 * Approach: Dutch National Flag Algorithm
 * - Use three pointers (`red`, `white`, `blue`) to partition the array.
 * - Place 0s at the beginning, 2s at the end, and leave 1s in the middle.
 * - Sort the array in a single pass using constant extra space.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = nums.size() - 1;

        while (white <= blue) {
            if (nums[white] == 0) {
                swap(nums[white], nums[red]);
                red++;
                white++;
            } else if (nums[white] == 1) {
                white++;
            } else {
                swap(nums[white], nums[blue]);
                blue--;
            }
        }
    }
};
