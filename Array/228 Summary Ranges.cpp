/*
    LeetCode 228. Summary Ranges
    https://leetcode.com/problems/summary-ranges/

    Approach:
    - Traverse the array and group consecutive numbers into ranges.
    - Store a single number if the range contains one element,
      otherwise store it in "start->end" format.

    Time Complexity: O(n)
    Space Complexity: O(1) (excluding the output vector)
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())
            return {};

        int n = nums.size();
        int i = 0;
        int initial = nums[0];
        vector<string> result;

        while (i < n - 1) {
            if (nums[i + 1] == nums[i] + 1) {
                i++;
            } else {
                int finall = nums[i];

                if (initial == finall)
                    result.push_back(to_string(initial));
                else
                    result.push_back(to_string(initial) + "->" + to_string(finall));

                initial = nums[i + 1];
                i++;
            }
        }

        int finall = nums[n - 1];

        if (initial == finall)
            result.push_back(to_string(initial));
        else
            result.push_back(to_string(initial) + "->" + to_string(finall));

        return result;
    }
};



class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();

        int i = 0;
        while (i < n) {
            int start = nums[i];

            while (i < n - 1 && nums[i + 1] == nums[i] + 1)
                i++;

            if (start == nums[i])
                result.push_back(to_string(start));
            else
                result.push_back(to_string(start) + "->" + to_string(nums[i]));

            i++;
        }

        return result;
    }
};