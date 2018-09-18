/*
Given two strings, determine if they share a common substring. A substring may be as small as one character.

For example, the words "a", "and", "art" share the common substring . The words "be" and "cat" do not share a substring.

Sample input:
2
hello
world
hi
world

*/
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {

 /* 
       string flag = "NO";
    for (char c: "abcdefghijklmnopqrstuvwxyz") {
        if(s1.find(c)!=string::npos && s2.find(c)!=string::npos){
            flag = "YES";
            break;
        }
    }
    return flag;
    */
   unordered_map<char,int> characterMap;
    int count = 0;
    for(char c : s1)
  {
     characterMap[c] +=1;
        cout<<"inserted"<<c<<endl;
  }
    for(char c: s2)
    {
        if(characterMap.find(c) != characterMap.end())
        {
            cout<<c<<" found"<<endl;
            count++;
        }
    }

    
    return (count > 0) ? "YES" : "NO" ;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
