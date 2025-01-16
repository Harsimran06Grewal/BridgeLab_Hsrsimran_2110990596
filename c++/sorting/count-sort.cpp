#include <iostream>
#include <climits>

using namespace std;

void countSort(int n, int arr[]){
    // finding the maximum
    int largest = INT16_MIN;
    for(int i = 0; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    //initialize the count array
    int count[largest + 1] = {0};

    //Store the count of elements in the array
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    //sorting the array
    int j = 0;
    for(int i = 0; i <= largest; i++){
        while(count[i] > 0){
            arr[j] = i;
            j++;
            count[i]--;
        }
    }
}

//function to print the array
void printArr(int n, int arr[]){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 8;
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};

    cout << "Original array: " << endl;
    printArr(8, arr);

    countSort(8, arr);

    cout << "Sorted array: " << endl;
    printArr(8, arr);


    return 0;
}