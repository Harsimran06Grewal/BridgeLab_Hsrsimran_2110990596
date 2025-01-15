// #include <iostream>

// using namespace std;

// constexpr int square(int x){
//     return x * x;
// }

// int main(){
//     constexpr int result = square(5); // computed at compile time
//     int result1 = square(10); // computed at runtime
//     cout << result;

//     return 0;
// }

#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int age;
    Student(string name, int age){
        this->name = name;
        this->age = age;
         cout << "I am base class constructor" << endl;
    }

    ~Student(){
        cout << "I am base class destructor" << endl;
    }
};

class Person : public Student{
public:
    Person(string name, int age) : Student(name ,age){
         cout << "I am derived class constructor" << endl;
    }
    ~Person(){
         cout << "I am derived class destructor" << endl;
    }
};

int main(){
    //Student s1("simran", 23);
    Person p1("simmi", 24);

    return 0;
}