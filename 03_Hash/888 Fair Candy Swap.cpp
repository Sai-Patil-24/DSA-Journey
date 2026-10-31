class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;

        for (int candy : aliceSizes) sumA += candy;
        for (int candy : bobSizes) sumB += candy;

        int delta = (sumB - sumA) / 2;

        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());

        for (int x : aliceSizes) {
            int y = x + delta;
            if (bobSet.count(y)) {
                return {x, y};
            }
        }

        return {};
    }
};