        /*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   
    int lastIndex1 = m - 1;
    int lastIndex2 = n - 1;
    int indexMerged =  m + n - 1;
        
        while(lastIndex2 >=0)
        {
            if(lastIndex1 >=0 && nums1[lastIndex1] > nums2[lastIndex2]){
                nums1[indexMerged] = nums1[lastIndex1];
                lastIndex1--;
            }
            else{
                nums1[indexMerged] = nums2[lastIndex2];
                lastIndex2--;
            }
            indexMerged--;
        }
    
    }
};