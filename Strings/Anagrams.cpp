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
