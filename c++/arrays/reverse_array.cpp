//Way1
// #include <iostream>

// using namespace std;

// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int size = 7;
//     for(int i=size-1; i>=0; i--){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

//Way2
#include <iostream>

using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        // int temp = arr[end];
        // arr[end] = arr[start];
        // arr[start] = temp;

        //or
        
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    reverseArray(arr, 7);
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
