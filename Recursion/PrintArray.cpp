#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& a,int& n,int i){
    if(i==n){
        return;
    }
    cout<<a[i]<<endl;
    print(a,n,i+1);
}


 
int main(){
    vector<int> a{10,20,30,40,50};
    int n=a.size();
    int i=0;
    print(a,n,i);
 
 
 
 
 return 0;
}