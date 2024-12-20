#include <iostream>

using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int largest = INT16_MIN;
    int index = -1;
    for(int i=0; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
            index = i;
        }
    }
   cout << index << endl;
}
