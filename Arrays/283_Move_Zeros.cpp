/*
Problem: Move Zeroes
LeetCode: 283
Difficulty: Easy

Approach:
 Use two pointers i and j
 fix j at 0
 traverse the array using i
 whenever a non-zero element is found place it at index j
 increment j
 after all non-zero elements are moved to the front fill the remaining positions with 0.

  
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0; // Points to the next position for a non-zero element

        // Move all non-zero elements to the front
        for(int i = 0; i < nums.size(); i++) {

            // If current element is non-zero
            if(nums[i] != 0) {

                nums[j] = nums[i]; // Place non-zero element at position j
                j++; //move j to next position
            }
        }

        // Fill remaining positions with zeros
        for(; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};
