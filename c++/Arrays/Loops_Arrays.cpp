#include <iostream>

using namespace std;

int main(){
    int marks[] = {32, 34, 67, 90, 100};
    int size = sizeof(marks) / sizeof(int);
    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    }
}