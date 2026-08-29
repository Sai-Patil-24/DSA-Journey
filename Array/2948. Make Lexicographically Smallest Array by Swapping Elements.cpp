class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        
        // 1. Store pairs of {value, original_index}
        vector<pair<int, int>> sorted_nums(n);
        for (int i = 0; i < n; ++i) {
            sorted_nums[i] = {nums[i], i};
        }
        
        // Sort the pairs by value
        sort(sorted_nums.begin(), sorted_nums.end());
        
        vector<int> ans(n);
        
        // 2. Iterate to find and process connected components
        int i = 0;
        while (i < n) {
            int j = i + 1;
            
            // Expand the current component as long as the adjacent difference is <= limit
            while (j < n && sorted_nums[j].first - sorted_nums[j-1].first <= limit) {
                j++;
            }
            
            // Elements from i to j-1 are in the same component.
            // Extract their original indices.
            vector<int> indices;
            for (int k = i; k < j; ++k) {
                indices.push_back(sorted_nums[k].second);
            }
            
            // Sort the original indices so we place the smallest values in the earliest spots
            sort(indices.begin(), indices.end());
            
            // 3. Assign the sorted values to the sorted original indices
            for (int k = 0; k < indices.size(); ++k) {
                // sorted_nums[i + k] holds the values for this component, already in sorted order
                ans[indices[k]] = sorted_nums[i + k].first; 
            }
            
            // Move on to the next component
            i = j;
        }
        
        return ans;
    }
};