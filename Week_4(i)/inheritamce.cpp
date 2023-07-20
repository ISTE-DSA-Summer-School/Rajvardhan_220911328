#include <iostream>

using namespace std;
class cars{
    public:
    int model;
    void model_name()
    {
        cout<<model<<endl;
    }
};
class cheverlet : public cars{
    public:
    string name = "Sail";
};

int main(){
    cheverlet car1;
    car1.model = 2015;
    car1.model_name();
    cout<<car1.name;
}