#include <iostream>

using namespace std;

int main(){
    string str = "apna college";

    // for(int i = 0; i < str.length(); i++){
    //     cout << str[i] << endl;
    // }

    for(char ch : str){
        cout << ch << " ";
    }

    return 0;
}