#include<iostream>
#include<vector>
using namespace std;

void printAll(vector<int>& a,int start,int end){
    if(end==a.size()) return;

    for(int j=start;j<=end;j++){
        cout<<a[j];
    }
    cout<<endl;
    printAll(a,start,end+1);
}

void Subarray(vector<int>& a){
    for(int i=0;i<a.size();i++){
        int end=i;
        printAll(a,i,end);
    }
}
 
int main(){
    vector<int> a{1,2,3,4,5};
    Subarray(a);
 
 
 
 
 
 return 0;
}