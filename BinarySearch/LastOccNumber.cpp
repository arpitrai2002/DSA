#include<iostream>
#include<vector>
using namespace std;

int LastOcc(vector<int> arr,int value){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==value){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<value) low=mid+1;
        else high=mid-1;
    }
    return ans;
}
 
int main(){
    vector<int> arr{1,2,2,2,2,2,2,5,6,6,6,6,8};
    int value=6;
    cout<<LastOcc(arr,value);
 
 
 
 
 
 return 0;
}