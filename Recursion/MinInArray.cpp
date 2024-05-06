#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

void Min(vector<int>& a,int& n,int i,int& m){
    if(i==n){
        return;
    }

    m=min(a[i],m);
    Min(a,n,i+1,m);

}
 
int main(){
    vector<int> a{10,20,15,2,4,22};
    int n=a.size();
    int i=0;
    int min=INT_MAX;
    Min(a,n,i,min);
    cout<<min<<endl;
 
 
 
 
 
 return 0;
}