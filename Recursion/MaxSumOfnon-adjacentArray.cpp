#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void sum(vector<int>& a,int s,int& n,int i,int& maxi){
    if(i>=n){
        maxi=max(maxi,s);
        return;
    }

    //exclude
    sum(a,s,n,i+1,maxi);

    //include
    s+=a[i];
    sum(a,s,n,i+2,maxi);




}
 
int main(){
    vector<int> a{2,7,9,3,1};
    int n=a.size();
    int s=0;
    int i=0;
    int maxi=INT_MIN;
    sum(a,s,n,i,maxi);
    cout<<maxi;
 
 
 
 
 
 return 0;
}