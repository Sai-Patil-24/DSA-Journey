// 1. Problem: Top K Frequent Elements
// 2. Difficulty: Medium
// 3. Time Complexity: O(N log N) (sorting frequency pairs)
// 4. Space Complexity: O(N) (map + vector)
// 5. Link: https://leetcode.com/problems/top-k-frequent-elements/
// 6. Approach:
//    - Count frequency using unordered_map
//    - Move to vector<pair<int,int>>
//    - Sort by frequency (descending)
//    - Take first k elements
// 7. Type: Optimal


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;

        
        for (auto &i : nums) {
            hash[i]++;
        }

      
        vector<pair<int, int>> v(hash.begin(), hash.end());

        
        sort(v.begin(), v.end(),
             [](const auto &a, const auto &b) {
                 return a.second > b.second;
             });

        vector<int> result;

       
        for (int i = 0; i < k; i++) {
            result.push_back(v[i].first);
        }

        return result;
    }
};