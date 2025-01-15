#include <iostream>
#include <vector>

using namespace std;

int main(){
    //way1
    vector<int> vec;
    cout << vec[0] << endl;  
    //output will be segmentation fault because we are searching for that space which is not present in the memory

    //way2
    vector<int> vec = {1, 2, 3};
    cout << vec[1] << endl;

    //way3
    vector<int> vec(3,0);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    

    return 0;
}