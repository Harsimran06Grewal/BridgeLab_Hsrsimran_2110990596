// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
      sum+=i;
       i++;
    }
    cout<<sum;
    return 0;
}




