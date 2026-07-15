/*
    LeetCode 3658. GCD of Odd and Even Sums
    https://leetcode.com/problems/gcd-of-odd-and-even-sums/

    Approach:
    - Calculate the sum of the first n odd and first n even numbers.
    - Use the Euclidean Algorithm to find their GCD.

    Time Complexity: O(n + log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int count = 0;
        int sumOdd = 0;
        int sumEven = 0;

        for (int i = 1; count < n; i += 2) {
            sumOdd += i;
            sumEven += (i + 1);
            count++;
        }

        while (sumEven != 0) {
            int temp = sumEven;
            sumEven = sumOdd % sumEven;
            sumOdd = temp;
        }

        return sumOdd;
    }
};