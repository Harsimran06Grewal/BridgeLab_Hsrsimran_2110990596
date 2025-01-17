#include <iostream>

using namespace std;

//function to swap elements
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

//function to find pivot element placed at correct place
int partition(int arr[], int si, int ei){
    int pivot = arr[ei]; //taking pivot as last element in array
    int i = si - 1;

    for(int j = si; j < ei; j++){
        //for checking smaller elements than pivot
        if(arr[j] < pivot){
            i++;
            //placing smaller elements at before pivot 
            swap(arr[i], arr[j]);
        }
    }

    //for putting pivot at correct place
    i++;
    swap(arr[i], arr[ei]);

    return i;
}

//function to sort elements before and after pivot 
void quickSort(int arr[], int si, int ei){
    //base case
    if(si >= ei){
        return;
    }

    int pIdx = partition(arr, si, ei); //gives pivot element placed at correct place

    quickSort(arr, si, pIdx - 1); //sort elements before pivot
    quickSort(arr, pIdx + 1, ei); //sort elements after pivot
}

//function to print array
void printArr(int n, int arr[]){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: " << endl;
    printArr(n, arr);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: " << endl;
    printArr(n, arr);

    return 0;
}