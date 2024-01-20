#include<iostream>
#include<vector>
using namespace std;

int missingElement(vector<int> arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=mid+1 && arr[mid-1]==mid){
            return mid+1;
        }
        else if(arr[mid]==mid+1) low=mid+1;
        else high=mid;
    }
    return -1;
}
int main(){
    vector<int> arr{2,3};
    cout<<missingElement(arr); 
 return 0;
}