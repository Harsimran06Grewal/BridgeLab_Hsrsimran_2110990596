#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    //string str = "apna college";

    // for(int i = str.length() - 1; i >= 0; i--){
    //     cout << str[i] << " ";
    // }

    // char str[] = "apna college";

    // int start = 0;
    // int end = strlen(str) - 1;
    // while(start < end){
    //     int temp = str[end];
    //     str[end] = str[start];
    //     str[start] = temp;
    //     start++;
    //     end--;
    // }

    // cout << str << endl;

    string str = "simran";
    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}