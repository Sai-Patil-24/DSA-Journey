class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int n = height.size();
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j = 1 ;j<n;j++)
            {
                int h = min(height[i],height[j]);
                int w = j-i;
                int area = h*w;
                max_area=max(area,max_area);
            }
        }

        return max_area;
    }
};

// LeetCode 11 - Container With Most Water
// Approach:
// Use the Two Pointer technique by placing one pointer at the beginning
// and the other at the end of the array. Calculate the area formed by
// the two lines and move the pointer with the smaller height inward,
// because the area is limited by the shorter line.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int max_area = 0;

        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;
            int area = h * w;

            max_area = max(area, max_area);

            if (height[j] > height[i]) {
                i++;
            } else {
                j--;
            }
        }

        return max_area;
    }
};