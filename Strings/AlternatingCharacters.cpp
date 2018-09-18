/*
You are given a string containing characters  and  only. Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

Sample Input:
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int deletionsCount = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i+1])
        {
            deletionsCount++;
        }
    }
    //cout<<"hello"<<endl;
    return deletionsCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
