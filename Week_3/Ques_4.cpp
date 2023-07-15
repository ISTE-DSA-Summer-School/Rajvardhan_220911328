#include <iostream>
using namespace std;

void revdigit(int *a)
{
    int rev=0, temp;
    while(*a!=0)
    {
        temp = *a%10;
        rev = rev*10 + temp;
        *a = *a/10;
    }
    cout<<endl<<rev;
}

int main()
{
    int a;
    cin>>a;
    revdigit(&a);
}