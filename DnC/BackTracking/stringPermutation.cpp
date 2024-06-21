#include<iostream>
#include<string>
#include<vector>
using namespace std;

void StringPermutation(string& a,int i){
    if(i>=a.size()){
        cout<<a<<endl;
        return; 
    }

    for(int j=i;j<a.size();j++){
        swap(a[i],a[j]);
        StringPermutation(a,i+1);
        // backtracking
        swap(a[i],a[j]);

    }
}
 
int main(){
    string a="abc";
    int i=0;
    StringPermutation(a,i);
 
 
 
 
 
 return 0;
}