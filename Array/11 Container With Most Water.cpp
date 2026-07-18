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