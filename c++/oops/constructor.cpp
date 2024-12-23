#include <iostream>

using namespace std;

class Teacher{
public:
    Teacher(){
        cout << "Hi, I am a constructor" << endl;
    }
    string name;
    string dept;
    string subject;
};

int main(){
    Teacher t1;    //Constructor called
    Teacher t2; 
    t1.name = "simran";
    t1.subject = "C++";
    t1.dept = "CSE";

    return 0;
}