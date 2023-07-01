#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"entet the number of number in an array"<<endl;
    cin>>n;
    int a[n],c=0;
    for(int i = 0; i<n;i++)
    {
        cout<<"Enter the values in array : "<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        c = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = c;
    }
    cout<<endl;
    cout<<endl;
    cout<<"The values of elements in an array : "<<endl;
    for(int i = 0; i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}