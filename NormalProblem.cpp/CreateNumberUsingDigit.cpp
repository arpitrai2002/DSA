#include<iostream>
#include<vector>
using namespace std;

int Number(vector<int> arr){
    int s=arr.size();
    int num=0;
    for(int i=0;i<s;i++){
        num=num*10+arr[i];
    }
    return num;
}
 
int main(){
    int num;
    cout<<"Enter total Number of digit"<<endl;
    cin>>num;
    vector<int> arr(num);
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"Number is "<<Number(arr)<<endl;

 return 0;
}