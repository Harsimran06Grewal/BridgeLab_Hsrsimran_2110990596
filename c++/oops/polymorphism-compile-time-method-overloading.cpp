#include <iostream>

using namespace std;

//type of parameters passed different
class Calculator{
public:
    int add(int a, int b){
        return a + b;
    }
    double add(double a, double b){
        return a + b;
    }
};

//number of parameters passed different
class Calculator1{
public:
    int add(int a, int b, int c){
        return a + b + c;
    }
    int add(int a, int b){
        return a + b;
    }
};

int main(){
    Calculator c1;
    cout << c1.add(10, 20) << endl;
    cout << c1.add(10.90, 30.90) << endl;

    Calculator1 c2;
    cout << c2.add(10, 20, 30) << endl;
    cout << c2.add(10, 20) << endl;

    return 0;
}