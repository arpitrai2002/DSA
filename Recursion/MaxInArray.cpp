#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits>
using namespace std;

void Max(vector<int>& a,int& n,int i,int& m){
    if(n==i){
        return;
    }
    m=max(a[i],m);
    return Max(a,n,i+1,m);

}
 
int main(){
    vector<int> a{40,12,05,82,13,128};
    int n=a.size();
    int i=0;
    int m=INT8_MIN;
    Max(a,n,i,m);
    cout<<m<<endl;

 
 return 0;
}