#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>& a,int& n,int i){
    if(i>=n){
        return true;
    }
    if(a[i+1]<a[i]){
        return false;
    }
    isSorted(a,n,i+1);
}
 
int main(){
    vector<int> a{10,20,30,40,50,10};
    int n=a.size();
    int i=0;
    bool val=isSorted(a,n,i);
    if(val){
        cout<<"Is Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
 
 
 
 
 
 return 0;
}