/* 
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.


look at the first word, take the first character
try to match the first character to each other word's first character
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()<2)
            return "";
        
        string prefix = "";

        char currentChar = strs[0][0];
        for(int j= 0 ; j < strs[0].size(); j++)//for each char in the first word...
        {
            currentChar = strs[0][j];
            for(int i = 0; i < strs.size(); i++) //for each word in strs 
            {
                if(strs[i][j] != currentChar){
                    cout<<"failed"<<endl;
                    return prefix;
                }
            }
            prefix+=currentChar;
        }
        return prefix;
    }
};