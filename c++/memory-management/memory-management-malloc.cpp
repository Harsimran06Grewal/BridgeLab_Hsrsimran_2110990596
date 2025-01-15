#include <iostream>
#include <cstdlib> 

using namespace std;

int main(){
    int size = 5;

    int* p = (int*)malloc(size * sizeof(int));

     for(int i = 0; i < size; i++){
       cin >> p[i];
    }

    for(int i = 0; i < size; i++){
        p[i] = p[i] + 1;
        cout << p[i] << " ";
    }
    cout << endl;

    free(p);

    return 0;
}