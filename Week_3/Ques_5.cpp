#include <iostream>
using namespace std;

void fact(int *a)
{
    int fact = 1;
    for(int i =1;i<=*a;i++)
    {
        fact*=i;
    }
    cout<<fact;
}

int main()
{
    int a;
    cin>>a;
    fact(&a);
    
}