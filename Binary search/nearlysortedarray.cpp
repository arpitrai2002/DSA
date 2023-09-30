#include<iostream>
#include<vector>
using namespace std;
int nearlysoted(vector<int> arr,int target){
    int size=arr.size();
    int i=0,j=size-1;
    int mid=(i+j)/2;
    while(i<=j){
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1>=i && arr[mid-1]==target){   /*mid-1>=0*/
            return mid-1;
        }
        if(mid+1<=j && arr[mid+1]==target){    /*mid+1<=size*/
            return mid+1;
        }
        else if(arr[mid]<target){
            i=mid+2;
        }
        else{
            j=mid-2;
        }
        mid=(i+j)/2;
    }
    return -1;

}


int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target=40;
    int ans=nearlysoted(arr,target);
    cout<<ans<<endl;
    return 0;
}