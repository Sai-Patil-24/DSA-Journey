class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count  = 0 ;

        for(int i =0 ; i<arr.size() ; i++)
        {   int sum = 0;
            for(int j = i ; j<arr.size();j++)
            {
                sum+=arr[j];
                if(sum%2==1) count++;
            }
        }

        return count;
    }
};