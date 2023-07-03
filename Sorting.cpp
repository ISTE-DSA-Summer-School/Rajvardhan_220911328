#include <iostream>

using namespace std;

void printarr(int n, int *arr)
{
    cout<<"sorted array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;;
    }
    
}

void Bubble_Sort(int n, int *arr)
{
    for (int i =0 ;i<n-1;i++)
    {
        for (int  j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printarr(n,arr);
}

void Selection_Sort(int n, int *arr)
{
    for (int  i = 0; i < n-1; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    printarr(n,arr);
}

void Insertion_Sort(int n, int arr[])
{
    for (int i =1; i<n;i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    printarr(n,arr);
}

int main()
{
    int n;
    cout<<"enter the number of value skin array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Insertion_Sort(n,arr);
    Bubble_Sort(n,arr);
    Selection_Sort(n,arr);
}