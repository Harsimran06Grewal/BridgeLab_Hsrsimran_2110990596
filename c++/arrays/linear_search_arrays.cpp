#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target){
    int index = -1;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            index = i;
        }
    }
    return index;
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;
   cout << linearSearch(arr, 7, 8);
}