#include <iostream>

using namespace std;

bool isPalin(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[str.length() - i - 1]){
            return true;
        }
    }
    return false;
}

int main(){
    string str = "racecar";

    if(isPalin(str)){
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";     
    }

    return 0;
}