#include <iostream>
#include <new>

using namespace std;

int main(){
    
    try{
    int* p = new int[1000000000]; 
    cout << "Memory allocated successfully";

    delete[] p;
    }
    catch(const bad_alloc &e){
        cout << "Exception Occurred: " << e.what() << endl;
    }

    return 0;
}