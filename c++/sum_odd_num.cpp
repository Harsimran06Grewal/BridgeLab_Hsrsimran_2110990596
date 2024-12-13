// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int sum=0;
//     for(int i=1;i<=n;i+=2){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }

//or 
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
}