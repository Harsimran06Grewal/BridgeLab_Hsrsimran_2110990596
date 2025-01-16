#include <iostream>

using namespace std;

// function to swap the two elements
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

//function to implement selection sort
void selectionSort(int n, int arr[]){
    for(int i = 0; i < n - 1; i++){
        int minPos = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minPos] > arr[j]){
                minPos = j;
            }
        }
        swap(arr[minPos], arr[i]);
    }
}

//function to print array
void printArr(int n, int arr[]){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {5, 4, 1, 3, 2};

     cout << "Original array: " << endl;
    printArr(5, arr);

    selectionSort(5, arr);

    cout << "Sorted array: " << endl;
    printArr(5, arr);


    return 0;
}