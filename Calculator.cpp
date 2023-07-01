#include <iostream>

using namespace std;

int main()
{
    float a,b;
    float sum =0;
    cout<<"Enter two numbers"<<endl;;
    cin>>a>>b;
    char op;
    cout<<"enter an opertor :"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        sum = a+b;
        break;
    case '-':
        sum = b-a;
        break;
    case '*':
        sum = a*b;
        break;
    case '/':
        sum = b/a;
        break;
    default:
        break;
    }
    cout<<"The answer given from the calculator is : "<<sum<<endl;

}
