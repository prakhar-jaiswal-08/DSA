/*
Problem: Remove Element
LeetCode: 27
Difficulty: Easy

Approach:
Use two pointers
(i will scan the array & k will store the element that are not equal to val)
Keep all elements that are not equal to val at the beginning of the array

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
