#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int coinChange(vector<int> a,int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=0;i<a.size();i++){
        int ans=coinChange(a,target-a[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}
 
int main(){
    vector<int> a{1,5,5};
    int target=11;
    cout<<coinChange(a,target);
 
 
 
 
 
 return 0;
}