/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        //create a hashmap storing the number and the index they are at
        unordered_map<int, int> map;
 
        //populate the hashmap
        for (int i=0; i < nums.size(); i++){
            map[nums[i]] = i;
        }
        
        //for each number in nums, try to find the number in the map that is the difference between the target (it should always work since that number was already added into the map above)
        for (int i=0; i<nums.size(); i++){
            auto itr = map.find(target-nums[i]);
            if( itr != map.end() && itr->second != i){
                result.push_back(i);
                result.push_back(itr->second);
                break;
            }
        }

        return result;
    }
};