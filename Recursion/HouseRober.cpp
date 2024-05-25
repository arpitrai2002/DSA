#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int HR(vector<int>& a,int i){
    if(i>=a.size()) return 0;

    int rob1=a[i]+HR(a,i+2);
    int rob2=0+HR(a,i+1);
    return max(rob1,rob2);

}

void HR2(vector<int>& a,int i,int& maxi,int sum){
    if(i>=a.size()){
    maxi=max(sum,maxi);
    return;
}
    HR2(a,i+1,maxi,sum);
    sum=a[i]+sum;
    HR2(a,i+2,maxi,sum);
}
int main(){
    vector<int> a{1,3,2,3,4};
    int i=0;
    int maxi=INT_MIN;
    int sum=0;
    HR2(a,i,maxi,sum);
    cout<<maxi;
    cout<<HR(a,i)<<endl;
 
 
 
 return 0;
}