#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr,int value){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==value){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<value) low=mid+1;
        else high=mid-1;
    }
    return ans;
}
 
int main(){
    vector<int> arr{1,2,2,3,3,3,5,9,12,16,18,24,29,45};
    int value=3;
    cout<<firstOcc(arr,value);
 
 return 0;
}