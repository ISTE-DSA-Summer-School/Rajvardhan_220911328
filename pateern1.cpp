#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of lines"<<endl;
    cin>>n;
    for (int rows = 0; rows <=n; rows++)
    {
        for (int col = 0; col <= rows; col++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}