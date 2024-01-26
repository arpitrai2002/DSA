#include<iostream>
#include<vector>
using namespace std;

int missingElement(vector<int> arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=mid+1){
            if(mid==0 || arr[mid-1]==mid){
            return mid+1;
            }
        high=mid-1;

        }
        else low=mid+1;
    }
    return -1;
}
int main(){
    vector<int> arr{1,2,3,4,5,7};
    cout<<missingElement(arr); 
 return 0;
}


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int tsum=n*(n+1)>>1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int d=tsum-sum;
        return d;
        
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xor1=xor1^nums[i];
            xor2=xor2^i;
        }
        xor2=xor2^n;
        return xor1^xor2;    
    }
};