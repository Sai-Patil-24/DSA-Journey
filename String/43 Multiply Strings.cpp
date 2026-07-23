/*
 * LeetCode Problem: 43. Multiply Strings
 * Link: https://leetcode.com/problems/multiply-strings/
 *
 * Approach: Grade-School Multiplication (Simulation)
 * - Simulate the manual multiplication process without converting the
 *   input strings to integers.
 * - Create a result array of size (n + m), where n and m are the lengths
 *   of the two input strings. The maximum number of digits in the product
 *   cannot exceed n + m.
 * - Multiply each pair of digits from right to left.
 * - Add the product to the appropriate position in the result array.
 * - Store the current digit at (i + j + 1) and carry at (i + j).
 * - Finally, skip leading zeros and build the answer string.
 *
 * Time Complexity: O(n × m)
 * Space Complexity: O(n + m)
 */

class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0")
            return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> ans(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                int product = (num1[i] - '0') * (num2[j] - '0');

                product += ans[i + j + 1];      

                ans[i + j + 1] = product % 10; 
                ans[i + j] += product / 10;    
            }
        }

        string result = "";

        for (int digit : ans) {
            if (result.empty() && digit == 0)
                continue;   

            result += digit + '0';
        }

        return result;
    }
};