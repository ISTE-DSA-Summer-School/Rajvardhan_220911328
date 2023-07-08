#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    bool flag = 0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.length()==s2.length())
    {
        if(s1.compare(s2)==s2.compare(s1))
        {
            cout<<"Anagrams"<<endl;
        }
        else
        {
            cout<<"The Words are of same length but are not anagrams "<<endl;
        }
    }
    else
    {
        cout<<"Words are not anagrams"<<endl;
    }
}