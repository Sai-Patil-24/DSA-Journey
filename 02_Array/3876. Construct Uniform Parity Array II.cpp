class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;
        int minEven = INT_MAX;

        for (int num : nums1) {
            if (num % 2 != 0) {
                minOdd = min(minOdd, num);
            } else {
                minEven = min(minEven, num);
            }
        }

       
        return minOdd == INT_MAX || minEven >= minOdd;
    }
};