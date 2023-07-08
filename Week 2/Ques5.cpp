#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string Sent, Word;
    int checker,i=0,j=0,counter=0,temp;
    getline(cin,Sent);
    cin>>Word;
    i=0;
    while(Sent[i]!='\0')
    {
        temp = i;
        j=0;
        while(Word[j]!='\0')
        {
            if(Sent[i]=Word[j])
            {
                i++;
            }
            j++;
        }
        checker = i-temp;
        if(checker==j)
        {
            counter++;
        }
        i=temp;
        i++;
    }
    cout<<counter;
}