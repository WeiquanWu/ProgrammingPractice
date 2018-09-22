/*
Print a single integer denoting the number of characters you must delete to make the two strings anagrams of each other.
sample input:
cde
abc
Expected output:
4
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
int delCount = 0;
    
    //create a array of 26 alphabets to keep track of the count of each letter in string a and b
    vector<int> count(26,0);
    //loop through string a, count the number of occurance of each letter
    for(auto character : a){ ++count[character - 'a'];}
     /*   What you are seeing is ASCII interpretation for the index. Since 'a' is 97, if c was 'a', then the index would be [0] because 97-97. Same continues for 'b' which would be 98-97 indicating an index of [1].*/
    //loop through string b, count the number of occurance of each letter, if there is a match, remove it from count
    for (auto character : b) { --count[character - 'a']; }
    for (auto val : count) { delCount += abs(val); }

return delCount;
}


bool isAnagram(string s, string t)
{
/*Compare string lengths
Instantiate a count map, std::unordered_map<char, unsigned int> m
Loop over s1, incrementing the count for each char.
Loop over s2, decrementing the count for each char, then check that the count is 0
*/
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, unsigned int> charMap;
        for(auto c : s){
            //cout<<"adding" <<c<<endl;
            charMap[c] ++;
        }
        
        for(auto c : t){
            if(charMap.find(c)!= charMap.end()){
                 charMap[c] --;  
            }
            else{
                cout<<"boo"<<endl;
                return false;
            }
        }
        
        if(charMap.empty())
            return true;
        
       // std::cout << "mymap's buckets contain:\n";
 // for ( unsigned i = 0; i < charMap.bucket_count(); ++i) {
   // std::cout << "bucket #" << i << " contains:";
    for ( auto local_it = charMap.begin(); local_it!= charMap.end(); ++local_it ){
        if(local_it->second!=0)
            return false;
      //std::cout << " " << local_it->first << ":" << local_it->second;
    }
   // std::cout << std::endl;}
        return true;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
