// 1. Problem: Largest Integer
// 2. Difficulty: Easy
// 3. Time Complexity: O(N)
// 4. Space Complexity: O(N)
// 5. Link: https://leetcode.com/problems/largest-integer-with-at-least-two-occurrences/
// 6. Approach:
//    - Count the frequency of each element using an unordered_map
//    - If k == N, return the maximum element in the array
//    - If k == 1, find the largest element that occurs exactly once
//    - Otherwise, consider only unique elements that are present at the first or last position
//    - Return the largest valid element, or -1 if no valid element exists
// 7. Type: Hash Map + Frequency Counting
class Solution
{
public:
    int largestInteger(vector<int> &nums, int k)
    {
        unordered_map<int, int> mpp;

        for (int it : nums)
        {
            mpp[it]++;
        }

        int ans = -1;

        if (k == nums.size())
        {
            for (int it : nums)
            {
                ans = max(ans, it);
            }
        }
        else if (k == 1)
        {
            for (auto &it : mpp)
            {
                if (it.second == 1)
                {
                    ans = max(ans, it.first);
                }
            }
        }
        else
        {
            for (auto &it : mpp)
            {
                int num = it.first;
                int cnt = it.second;

                if (cnt == 1 && (num == nums[0] || num == nums[nums.size() - 1]))
                {
                    ans = max(ans, num);
                }
            }
        }

        return ans;
    }
};