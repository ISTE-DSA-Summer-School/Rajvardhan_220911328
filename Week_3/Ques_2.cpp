#include <iostream>
using namespace std;

void swap(int a,int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b<<endl;
}
void swap_using_pointers (int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;

}

int main()
{
    int a = 4;
    int b = 2;
    swap(a,b);
    swap_using_pointers(&a,&b);
    cout<<a<<" "<<b;
}