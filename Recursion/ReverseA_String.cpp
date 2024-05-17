#include<iostream>
#include<string>
// #include<algorithm>
using namespace std;

void reverse(string& a,int i,int j){
    if(i>=j){
        return;
    }
    swap(a[i],a[j]);
    reverse(a,i+1,j-1);
}
 
int main(){
    string a="ABba";
    int i=0;
    int j=3;
    reverse(a,i,j);
    cout<<a<<endl;
 
 
 return 0;
}