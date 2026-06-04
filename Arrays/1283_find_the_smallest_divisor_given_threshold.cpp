/*
LeetCode 1283 - Find the Smallest Divisor Given a Threshold

Approach: Apply binary search on the possible divisor range [1, max(nums)].
For each divisor, calculate the sum of ceil(nums[i] / divisor). If the sum
is within the threshold, try a smaller divisor; otherwise increase it.

Time: O(n log(max(nums)))
Space: O(1)
*/

class Solution {
public:
    int sumbyDivisions(vector<int>& nums, int divisor) {
        int sum = 0;

        for (int num : nums) {
            sum += ceil((double)num / divisor);
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (sumOfDivisions(nums, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
