/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
*/
class Solution {
public:
    bool isPalindrome(string s) {
    if(s.size() <2)
        return true;
        
    bool isPalindrome = true;
    
    int left = 0;
    int right = (s.size() -1);
    while(left <= right)
    {
        char leftCha = tolower(s[left]);
        char rightCha= tolower(s[right]);
        if(leftCha == ' ' ||  isalnum(leftCha) ==0)
            left ++;
        else if(rightCha == ' ' ||  isalnum(rightCha) ==0)
            right--;
        else
        {
            if(leftCha != rightCha)
            {
                cout<<leftCha<<rightCha<<endl;
                isPalindrome = false;
            }
            left ++;
            right--;
        }
    }

    return isPalindrome;
    }
};