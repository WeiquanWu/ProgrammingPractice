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

/*Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
*/

class Solution {
public:
    int firstUniqChar(string s) {
        int lowest = -1;
        unordered_map<char, int> charMap;
        for(int i = 0; i<s.size(); i++)
        {
            //charMap[c] ++;
            if(charMap.find(s[i]) != charMap.end())// already exists, mark as -1 since it's a duplicate
            {
                charMap[s[i]] = -1;
            }
            else
            {
                charMap[s[i]] = i;
            }
        }
        
        for(auto c : charMap)
        {
           if(c.second == -1 )
           {continue;}
            
            if(c.second < lowest || lowest == -1)
            {
                lowest = c.second;
            }
        }
      
        return lowest;
    }
};