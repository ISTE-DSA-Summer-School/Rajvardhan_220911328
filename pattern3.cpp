#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines: "<<endl;
    cin>>n;

    for (int rows =1; rows<=n;rows++)
    {
        for (int col =1; col<=n-rows;col++)
        {
            cout<<" ";
        }
        for(int col = 1; col<=rows;col++)
        {
            cout<<" "<<"*";
        }
        cout<<endl;
    }
}