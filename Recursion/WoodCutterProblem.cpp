#include<iostream>
#include<limits.h>
using namespace std;

int pieces(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }

    if(n<0){
        return INT_MIN;
    }

    int ans1=pieces(n-a,a,b,c)+1;
    int ans2=pieces(n-b,a,b,c)+1;
    int ans3=pieces(n-c,a,b,c)+1;

    int ans=max(ans1,max(ans2,ans3));
    return ans;

}
 
int main(){
    int n=7;
    int a=2;
    int b=2;
    int c=5;
    cout<<pieces(n,a,b,c);
 
 
 
 
 return 0;
}