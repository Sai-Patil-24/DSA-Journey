class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int a = nums[0];
        int b = nums[n-1];
        if (a == 0 && b == 0) {
            cout << "Undefined";
            return 0;
        }a
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }
};