#include<iostream>
using namespace std;

int Target(int n,int k,int target){
    if(target<0) return 0;
    if(n==0 && target==0) return 1;
    if(n!=0 && target==0) return 0;
    if(n==0 && target!=0) return 0;

    int ans=0;
    for(int i=0;i<=k;i++){
        ans=Target(n-1,k,target-i)+ans;
    }
    return ans;
}
 
int main(){
    int n=2;
    int k=6;
    int target=7;
    cout<<Target(n,k,target);
 
 return 0;
}