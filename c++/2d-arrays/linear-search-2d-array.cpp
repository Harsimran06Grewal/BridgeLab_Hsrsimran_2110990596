#include <iostream>

using namespace std;

void findTarget(int matrix[3][3], int rows, int cols, int target){

     for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == target){
                cout << "{" << i <<"," << j << "}" << endl;
                return;
            }
        }
    }
    
    cout << -1;
}

int main(){
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 8;
    findTarget(matrix, 3, 3, 8);

    return 0;
}