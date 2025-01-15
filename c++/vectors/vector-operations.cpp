#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for(int val : vec){
        cout << val << endl;
    }

    vec.pop_back();

     for(int val : vec){
        cout << val << endl;
    }

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    cout << vec.at(0);

    return 0;
}