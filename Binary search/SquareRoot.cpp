#include<iostream>
#include<vector>
using namespace std;

int Sqr(int a){
    int low=0;
    int high=a;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==a){
            return mid;
        }
        if(mid*mid<a){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
 
int main(){
    int a=10;
    cout<<Sqr(a); 
 
 
 return 0;
}