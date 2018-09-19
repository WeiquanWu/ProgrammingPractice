/*
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            int number = nums[i];
            cout<<number<<endl;
            for(int j = i+1; j < nums.size(); j++)
            {
                if(number == nums[j])
                {
                    nums.erase(nums.begin() + j);
                    //i--;
                    j--;
                    size--;
                }
            }
        }
        cout<<size;
        return size;
    }
};