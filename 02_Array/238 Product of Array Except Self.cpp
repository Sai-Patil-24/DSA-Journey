// Problem Name: Product of Array Except Self
// Difficulty Level: Medium
// Approach Type: Prefix and Suffix Products (Optimized Space)
// Time Complexity: O(n) — The array is traversed twice: once for the prefix products and once for the suffix products.
// Space Complexity: O(1) — The algorithm uses only a few variables (n, suffix) for tracking products. As noted in the problem constraints, the output array (result) does not count as extra space.
// Link: https://leetcode.com/problems/product-of-array-except-self/description/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n,1);

        //prefix calculation
        for(int i = 1 ; i<n ; i++)
        {
            result[i] = result[i-1]*nums[i-1];
        }

        //suffix calculation 
        int suffix =1;
        for(int j = n-1 ; j>=0 ; j--)
        {
            result[j] *= suffix;
            suffix *= nums[j];
        }

        return result;

    }
};