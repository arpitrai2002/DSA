#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> arr,int target){
    int i=0;
    int r=arr.size();
    int c=arr[0].size();
    int j=r*c-1;
    int mid=i+(j-i)/2;
    while(i<=j){
        int row=mid/c;
        int col=mid%c;
        if(arr[row][col]==target){
            return 1;
        }
        else if(arr[row][col]<target){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
        mid=i+(j-i)/2;
    }
    return 0;
}
 
int main(){
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    cout<<search(arr,1);
 
 
 
 
 
 return 0;
}