#include <iostream>
#include<vector>
#include<string>

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
        bool isEqual(const Stack& other) const {
            if (top != other.top)
                return false;

            for (int i = 0; i <= top; i++) {
                if (a[i] != other.a[i])
                    return false;
            }

            return true;
        }

        int peek() {
            if (!isEmpty()) {
                return a[top];
            } else {
                cout << "Stack is empty, cannot get the top element." << endl;
                return -1;
            }
    }
};

bool check(string a, string b)
{
    Stack stack1;
    Stack stack2;
    for (char c : a)
    {
        if(c!='#')
        {
            stack1.push(c);
        }
        else{
            stack1.pop();
        }

    }
    for (char c:b)
    {
        if(c!='#')
        {
            stack2.push(c);
        }
        else{
            stack2.pop();
        }
    }
    return stack1.isEqual(stack2);
}

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(check(a,b))
    {
        cout<<"Strings are equal"<<endl;
    }
    else{
        cout<<"Strings are not equal"<<endl;
    }
}
