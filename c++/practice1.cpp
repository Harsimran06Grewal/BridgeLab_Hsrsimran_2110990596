#include <iostream>

using namespace std;

int incrementByOne(int a){
 
    return ++a;
}

int main(){
    int a = 10;
    incrementByOne(a);
    cout << a;
}
