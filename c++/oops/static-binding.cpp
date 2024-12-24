#include <iostream>

using namespace std;

class A{
public:
    void display(){
        cout << "static binding" << endl;
    }
};

int main(){
    A obj;
    obj.display();
}