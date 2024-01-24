#include<iostream>
#include<vector>
using namespace std;

int Duplicate(vector<int> arr){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}
 
int main(){
    vector<int> arr{1,3,4,2,4};
    cout<<Duplicate(arr)<<endl;
 return 0;
}