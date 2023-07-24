#include<iostream>
#include<vector>

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

int main()
{
    Stack stack;
    vector <int> a;
    int n,temp,size=0;
    cout<<"enter the number of values"<<endl;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for (int c : a){
        stack.push(c);
        size++;
    }
    int middle = size/2;

    Stack tempo;

    for(int i =0;i<middle;i++)
    {
        tempo.push(stack.peek());
        stack.pop();
    }
    stack.pop();
    while(!tempo.isEmpty())
    {
        stack.push(tempo.peek());
        tempo.pop();
    }
    while(!stack.isEmpty())
    {
        cout<<stack.peek()<<" ";
        stack.pop();
    }
}