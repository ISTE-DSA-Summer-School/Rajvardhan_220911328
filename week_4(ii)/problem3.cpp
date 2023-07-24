#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Stack{
    private:
    static const int max_size = 100;
    int top;
    char a[max_size];
    public:
    Stack(){
        top = -1;
    }
        bool isEmpty()
        {
            return top ==-1;
        }
        bool isFull(){
            return top == max_size-1;
        }
        void push(char value){
            if(!isFull())
            {
                top++;
                a[top] = value;
            }
            else{
                cout<<"Cannot Push Stack is Full"<<endl;
            }
        }
        char pop(){
            if(!isEmpty())
            {
                char value = a[top];
                top--;
                return value;
            }
            else{
                cout<<"Cannot pop from empty stack"<<endl;
                return '\0';
            }
        }
};

int main()
{
    Stack stack;
    string input;
    cout<<"enter String "<<endl;
    getline(cin,input);

    for(char c : input){
        stack.push(c);
    }
    string rev;
    while(!stack.isEmpty())
    {
        rev+=stack.pop();
    }
    cout<<"Reversed string is : "<<rev<<endl;
}