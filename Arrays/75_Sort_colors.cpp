/*
LeetCode 75 - Sort Colors

Approach: Use the Dutch National Flag algorithm with three pointers.
Place 0s at the beginning, 2s at the end, and keep 1s in the middle.

Time: O(n)
Space: O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
