#include <iostream>

using namespace std;

class Person{
public:
    string name;
    int age;

    //Non-parameterized Constructor
    Person(){
        cout << "I am base class non-parameterized constructor" << endl;
    }
};

class Student : public Person{
public :
    int rollno;

    //Non-parameterized Constructor
    Student(){
        cout << "I am derived class non-parameterized constructor" << endl;
    }
};

int main(){
    Student s1;
    s1.name = "simram";
    s1.age = 21;
    s1.rollno = 2110990596;
    
    cout << s1.name << endl;

    return 0;
}

// in output firstly base class constructor is called after that derived class constructor is called.