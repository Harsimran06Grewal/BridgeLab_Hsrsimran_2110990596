//Pointer Arithmetic :- Increment

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout << ptr << endl;
//     ptr++;
//     cout << ptr << endl;
// }


//Pointer Arithmetic :- Decrement

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout << ptr << endl;
//     ptr--;
//     cout << ptr << endl;
// }


//Pointer Arithmetic :- Addition

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout << ptr << endl;
//     ptr = ptr + 2;
//     cout << ptr << endl;
// }

//Pointer Arithmetic :- Subtraction

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 10;
//     int* ptr = &a;
//     cout << ptr << endl;
//     ptr = ptr - 2;
//     cout << ptr << endl;
// }

//Accessing values for Array 
// #include <iostream>

// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout << *arr << endl;
//     cout << *(arr+1) << endl;
//     cout << *(arr+2) << endl;
//     cout << *(arr+3) << endl;
//     cout << *(arr+4) << endl;
// }


//Subtract Pointer

// #include <iostream>

// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int* ptr2;
//     int* ptr1 = ptr2 + 2;
//     cout << ptr1 - ptr2 << endl;
// }


//Compare pointer

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 10;
//     int* ptr1;
//     int* ptr2;
//     cout << ptr1 << endl;
//     cout << ptr2 << endl;
//     cout << ( ptr1 > ptr2 ) << endl;
// }


//practice problem

#include <iostream>

using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;
    cout << *(ptr+1) << endl;
    cout << *(ptr+3) << endl;
    ptr++;
    cout << *(ptr) << endl;
}