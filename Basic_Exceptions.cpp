#include<iostream>

using namespace std;

void mightGoWrong()
{
    bool error = true;
    if(error)
    {
        throw 8;
    }
}

int main()
{
    mightGoWrong();
    return 0;
}