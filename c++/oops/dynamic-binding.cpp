#include <iostream>

using namespace std;

class Animal{
public:
    virtual void sound() = 0; // pure virtual function
};

class Dog : public Animal{
public:
    void sound(){
        cout << "Dog barks";
    }
};

int main(){
    Animal* ptr;
    Dog dog;
    ptr = &dog;
    ptr->sound();

    return 0;
}