#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[] = "apna college";
    int len = 0;

    for(int i = 0; i < str[i] != '\0'; i++){
        len++;
    }

    cout << "length of string : " << len << endl;
    cout << "length of string : " << strlen(str) << endl;

    return 0;
}