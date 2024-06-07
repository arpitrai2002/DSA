#include<iostream>
#include<limits.h>
#include <math.h>
using namespace std;

int PerfectSquares(int n){
    if(n==0) return 1;
    if(n<0) return 0;

    int ans=INT_MAX;
    int i=1;
    int end=sqrt(n);
    while(i<=end){
        int square=i*i;
        int PSans=1 + PerfectSquares(n-square);
        ans=min(PSans,ans);
        i++;
    }
    return ans;

}

 
int main(){
    int n=1;
    int ans=PerfectSquares(n)-1;
    cout<<ans;
 
 
 
 
 
 return 0;
}