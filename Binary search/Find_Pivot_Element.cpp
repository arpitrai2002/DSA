#include<iostream>
#include<vector>
using namespace std;

int PivotIndex(vector<int> arr){
    int low=0;
    int high=arr.size()-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(low==high){
            return mid;
        }
        if(mid+1<=high && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1>=low && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[low]>arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
 
int main(){
    vector<int> arr{5,6,8,10,2,4};
    int index=PivotIndex(arr);
    cout<<index<<" "<<arr[index]<<endl;
 return 0;
}