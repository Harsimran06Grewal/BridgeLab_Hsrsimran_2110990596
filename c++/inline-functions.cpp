#include <iostream>

using namespace std;

inline int add(int x, int y){
    return x + y;
}

int main(){
    int result = add(5, 6);
    cout << result << endl;

    return 0;
}