/*
LeetCode 540 - Single Element in a Sorted Array

Approach: Every element appears twice except one.
Using XOR, duplicate elements cancel each other out, leaving only the single element.

Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int XOR = 0;

        for (int num : nums) {
            XOR ^= num;
        }

        return XOR;
    }
};
