#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    bool flag = 0;
    string s1;
    getline(cin,s1);
    for(int i=0;i<=s1.length();i++)
    {
        flag = 0;
        for(int j = 0;j<=s1.length();j++)
        {
            if(s1[i]==s1[j] &&i!=j)
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            cout<<s1[i]<<endl;
        }
    }
    if(flag)
    {
        cout<<"no repeating chaaracter"<<endl;
    }
}