class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Case 1: Change the two smallest elements
        int option1 = nums[n - 1] - nums[2];
        
        // Case 2: Change the two largest elements
        int option2 = nums[n - 3] - nums[0];
        
        // Case 3: Change one smallest and one largest element
        int option3 = nums[n - 2] - nums[1];
        
        // low is always 0, so we just return the minimum possible high score
        return min({option1, option2, option3});
    }
};