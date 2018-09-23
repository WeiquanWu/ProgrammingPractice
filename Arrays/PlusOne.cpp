class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        for(int i = digits.size() - 1; i >= 0; i--)//counting from the back of digits
        {
            if(digits[i] != 9)//if the last digit is less than 9, we can just increment it without doing anything and return the result
            {
                digits[i] ++;
                break;
            }
            //if it's 9, adding 1 will bring it to 10, we set the last digit to 0
            digits[i] = 0;
        }
        if(digits[0] == 0)// and insert 
            digits.insert(digits.begin(), 1);
        return digits;
        
    }
};