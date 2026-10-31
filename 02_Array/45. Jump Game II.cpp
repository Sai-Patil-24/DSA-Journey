class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0 ;
        int current = 0;
        int far=0;

        for(int i = 0 ; i<nums.size()-1;i++)
        {
            far=max(far,i + nums[i]);

            if(i==current)
            {
                jump++;
                current=far;
            }

            if(current>=nums.size()-1)
            {
                break;
            }
        }

        return jump;
    }
};