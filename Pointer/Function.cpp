#include<iostream>
using namespace std;

void solve(int arr[]){
    cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
}
 
int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    solve(arr);
 
 
 
 return 0;
}