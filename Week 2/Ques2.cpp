#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char temp;
    string s1,s2;
    cin>>s1;
    int count = 0;
    int i = 0;
    while(s1[i] != '\0')
    {
        count++;
        i++;
    }
    // cout<<i;
    // cout<<count;
    for (int i = 0;i<=count/2-1;i++)
    {
        temp = s1[i];
        s1[i] = s1[count-i-1];
        s1[count-i-1] = temp;
    }
    cout<<s1;
}