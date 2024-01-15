#include<iostream>
#include<vector>
using namespace std;

int MajorityElement(vector<int> arr){
    int n=arr.size();
    int count=0;
    int ele;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            ele=arr[i];
        }
        else if(ele==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    if(count>(n/2)){
        return ele;
    }
    return -1;
}
 
int main(){
    vector<int> arr{6,4,4,4,4,6,8,2,5,6,6,8,6,6};
    int a=MajorityElement(arr);
    cout<<a<<endl;
 
 
 
 return 0;
}