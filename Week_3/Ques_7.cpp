#include <iostream>
using namespace std;

void deldup(int arr[],int* q)
{
    int *p = arr;
    for(int i = 0;i<*q;i++)
    {
        if(*(p+i) == *(p+i+1))
        {
            for(int j = i;j<*q;j++)
            {
                *(p+j) = *(p+j+1);
            }
            *q = *q-1;
        }
    }

}

int main()
{
    int n;
    cin>>n;
    int *q = &n;
    int arr[n];
    int *p = arr;
    for(int i = 0;i<n;i++)
    {
        cin>>*(p+i);
    }
    deldup(arr,&n);
    cout<<"Deleted Array is : "<<endl;

    for(int i = 0;i<*q;i++)
    {
        cout<<*(p+i)<<endl;
    }
}