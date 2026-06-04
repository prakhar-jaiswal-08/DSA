/*
LeetCode 268 - Missing Number

Approach: Calculate the expected sum of numbers from 0 to n and subtract
the actual array sum
The difference is the missing number

Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};
