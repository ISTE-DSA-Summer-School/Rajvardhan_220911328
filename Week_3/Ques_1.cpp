#include <iostream>
void swap(int *ptra , int *ptrb)
{
    int temp;
    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}
using namespace std;
int main()
{
    int a = 2;
    int b = 4;
    swap(&a,&b);
    cout<<a<<" "<<b;
    
}

// #include <iostream>
// void swap(int &ptra , int &ptrb)
// {
//     int temp;
//     temp = ptra;
//     ptra = ptrb;
//     ptrb = temp;
// }
// using namespace std;
// int main()
// {
//     int a = 2;
//     int b = 4;
//     int* a1 = &a;
//     int* a2 = &b;
//     swap(a1,a2);
//     cout<<a<<" "<<b;
// 
//}