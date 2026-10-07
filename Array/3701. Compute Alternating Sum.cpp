class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                sum += nums[i];  
            } else {
                sum -= nums[i];   
            }
        }

        return sum;
    }
};


//optimized solution
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minElement(vector<int>& nums) {
        int minimum = INT_MAX;

        for (int n : nums) {
            minimum = min(minimum, digitSum(n));
        }

        return minimum;
    }
};