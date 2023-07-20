#include <iostream>

using namespace std;

class myCar{
    public:
    int model;
    string car_name;
    string brand;
    // void print_name_world(int age, string name)
    // {
    // 	cout<<"Hi : "<<name<<" your age is : "<<age;
    // }
    myCar(int x, string y, string z)
    {
        model = x;
        car_name = y;
        brand = z;
    }

};

int main()
{
	myCar car1(1999,"Sls","Mercedes");
    cout<<car1.model<<" "<<car1.car_name<<" "<<car1.brand;
    
}