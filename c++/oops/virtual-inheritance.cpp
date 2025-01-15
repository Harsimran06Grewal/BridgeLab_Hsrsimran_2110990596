#include <iostream>

using namespace std;

class Grandparent{
public:
    int age;
    string name;

    Grandparent(int age, string name){
        this->age = age;
        this->name = name;
    }
};

class Parent1 : virtual public Grandparent{
public:

    Parent1(int age, string name) : Grandparent(age, name){
    } 
};

class Parent2 : public virtual Grandparent{
public:

    Parent2(int age, string name) : Grandparent(age, name){
    } 
};

class Child : public Parent1, Parent2{
public:

    Child(int age, string name) : Parent1(age, name), Parent2(age, name){
    } 
};

int main(){

    return 0;
}