class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        vector<vector<int>> groups(groupSizes.size() + 1);

        for (int i = 0; i < groupSizes.size(); i++) {
            int size = groupSizes[i];

            groups[size].push_back(i);

            if (groups[size].size() == size) {
                result.push_back(groups[size]);
                groups[size].clear();
            }
        }

        return result;
    }
};