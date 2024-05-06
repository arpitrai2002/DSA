#include<iostream>
using namespace std;

void SubSequence(string a,string b,int& n,int i){
    if(i>=n){
        cout<<b<<" ";
        return;
    }

    //exclude 
    SubSequence(a,b,n,i+1);
    //include
    b.push_back(a[i]);
    SubSequence(a,b,n,i+1);


}
int main(){
    string a="abcde";
    string b="";
    int n=a.size();
    int i=0;
    SubSequence(a,b,n,i);
 
 
 
 
 
 return 0;
}