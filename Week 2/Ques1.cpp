#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    cout<<endl<<s1<<endl;;
    int len = s1.length();
    cout<<len<<endl;
    string sub = s1.substr(2,5);
    cout<<sub<<endl;
    string s2 = " is Sunny";
    s1 = s1.append(s2);
    cout<<s1<<endl;
    string s3 = "799";
    cout<<stoi(s3) + 10<<endl;
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
}