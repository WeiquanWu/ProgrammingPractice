/*
Reverse String
  Go to Discuss
Write a function that takes a string as input and returns the string reversed.

Example 1:

Input: "hello"
Output: "olleh"
Example 2:

Input: "A man, a plan, a canal: Panama"
Output: "amanaP :lanac a ,nalp a ,nam A"
*/

class Solution {
public:
    string reverseString(string s) {
        int n = s.size();
        string temp;
        if(n == 0 )
            return s;
        for(int i = n-1; i >= 0 ; i--)
        {
            cout<<s[i]<<endl;
            temp+=s[i];
        }
        return temp;
    }
};