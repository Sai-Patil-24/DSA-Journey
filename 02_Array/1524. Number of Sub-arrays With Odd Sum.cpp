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


//better approach
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1000000007;
        int oddCount = 0, evenCount = 1, prefixSum = 0, result = 0;
        for (int num : arr) {
            prefixSum += num;
            if (prefixSum % 2 == 0) {
                result = (result + oddCount) % MOD;
                evenCount++;
            } else {
                result = (result + evenCount) % MOD;
                oddCount++;
            }
        }
        return result;
    }
};