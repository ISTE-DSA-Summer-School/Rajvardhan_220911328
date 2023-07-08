#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int i =0;
    while(s1[i]!='\0')
    {
        if(s1[i] != ' ')
        {
            s1[i] = s1[i]- 32;
            i++;
        }
        else
        {
            s1[i] = s1[i];
            i++;
        }
        
    }
    cout<<s1;
}