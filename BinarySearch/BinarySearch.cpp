#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int value){
    int low=0;
    int high=arr.size()-1;
    
    while(low<=high){
        int mid=(low+high)>>1;
        if(arr[mid]==value){
            return mid;
        }
        else if(arr[mid]<value){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
 
int main(){
    vector<int> arr{1,2,3,4,5,6,8,9}; 
    int value=9;
    cout<<"Value found at "<<binarySearch(arr,value)<<endl;
 return 0;
}