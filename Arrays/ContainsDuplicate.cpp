/*
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        if(n < 2)
        {
            return false;
        }
        bool duplicate = false;
        for(int i = 0; i < n; i++)
        {
            int current = nums[i];
            for(int j = i+1; j < n; j++)
            {
                if(current == nums[j])
                {
                    duplicate = true;
                    break;
                    }
            }
        }
        return duplicate;
    }
};