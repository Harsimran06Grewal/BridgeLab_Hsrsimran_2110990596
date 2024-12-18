#include <iostream>

using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << matrix[1][1] << endl;

    return 0;
}