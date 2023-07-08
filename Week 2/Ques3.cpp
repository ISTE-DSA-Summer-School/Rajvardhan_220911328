#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    bool flag = true;
    int len = s1.length();
    for (int  i =0;i<len/2-1;i++)
    {
        if(s1[i] != s1[len-i])
        {
            flag = false;
        }
    }
    if(flag )
    {
        cout<<"palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}