/*
LeetCode 485 - Max Consecutive Ones

Approach: Traverse the array and count consecutive 1s.
Reset the count when a 0 is encountered and keep track of the maximum count seen.

Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
                maxi = max(maxi, cnt);
            } else {
                cnt = 0;
            }
        }

        return maxi;
    }
};
