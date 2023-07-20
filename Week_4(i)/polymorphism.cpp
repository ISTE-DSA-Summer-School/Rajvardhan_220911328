#include<iostream>
using namespace std;

class Animal{
    public:
    void animalSound(){
        cout<<"The animal makes a sound \n";
    }
};

class pig: public Animal{
    public:
    void animalSound(){
        cout<<"The pig says: wee wee"<<endl;
    }
};
class dog : public Animal{
    public:
    void animalSounds(){
        cout<<"The dog says : bow bow \n";
    }
};

int main(){
    Animal myAnimal;
    pig myPig;
    dog myDog;
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
}