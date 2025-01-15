#include <iostream>

using namespace std;

class Student{
public:
    string name;
    Student(){
        cout << "I am a non-parameterized constructor";
    }
    Student(string name){
        this->name = name;
        cout << "I am parameterized constructor" << endl;
    }
};

int main(){
   // Student s1; // output will be non parameterized constructor

    Student s1("simran");
    cout << s1.name << endl;

    //in polymorphism depending on context oske basis par object apni form change kr leta hae

    return 0;
}