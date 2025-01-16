#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n = 5;
    int arr[] = {5, 4, 1, 3, 2};

    // sort array in ascending order
    sort(arr, arr + n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}