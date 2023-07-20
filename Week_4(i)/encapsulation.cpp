#include <iostream>

using namespace std;
class hello_world{
    private:
    int salary;
    public:
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    int yourSalary;
    cout<<"Please enter yopur salary"<<endl;
    cin>>yourSalary;
    hello_world hw;
    hw.setSalary(yourSalary);
    cout<<"Your Salary is : "<<hw.getSalary()<<endl;

}