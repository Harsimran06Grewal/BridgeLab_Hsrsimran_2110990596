#include <iostream>

using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout << "I am base class non-parameterized constructor" << endl;
    }

    ~Person(){
        cout << "I am base class non-parameterized destructor" << endl;
    }
};

class Student : public Person{
public:
    int rollno;

    Student(){
        cout << "I am derived class non-parameterized constructor" << endl;
    }

    ~Student(){
         cout << "I am derived class non-parameterized destructor" << endl;
    
    }
};

int main(){
    Student s1;

    return 0;
}