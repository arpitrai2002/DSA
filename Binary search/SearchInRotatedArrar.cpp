#include<iostream>
#include<vector>
using namespace std;

int Index(vector<int> arr){
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

int Search(vector<int> arr,int low,int high,int target){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
 
int main(){
    vector<int> arr{2,5,6,0,0,1,2};
    int index=Index(arr);
    int target=0;
    int ans=0;
    if(arr[0]<=target && target<=arr[index]){
        ans=Search(arr,0,index,target);
    }
    else{
        ans=Search(arr,index+1,arr.size()-1,target);
    }
    cout<<ans<<endl;
 return 0;
}



