// 1. Problem: Find Missing Elements
// 2. Difficulty: Easy
// 3. Time Complexity: O(N log N + K), where N is the size of the array and K is the number of missing elements
// 4. Space Complexity: O(K), for storing the missing elements
// 5. Link: (Add the problem link here)
// 6. Approach:
//    - Sort the array in ascending order.
//    - Traverse each pair of consecutive elements.
//    - For every gap, add all missing integers between the two elements to the answer.
//    - Return the list of all missing elements.
// 7. Type: Sorting
// 8. Approach Level: Brute Force after Sorting

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=1;i<nums.size();i++){
            for(int j=nums[i-1]+1;j<nums[i];j++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};