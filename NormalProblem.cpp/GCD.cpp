#include<iostream>
using namespace std;

int GCD(int n,int m){
    if(n==0) return m;
    if(m==0) return n;

    while(n>0 && m>0){
        if(n>m){
            n=n-m;
        }
        else m=m-n;
    }
    return n==0?m:n;
}
 
int main(){
    int n,m;
    cin>>n>>m;
    int HCF=GCD(n,m);
    cout<<"HCF "<<HCF<<endl;
    cout<<"LCM "<<(n*m)/GCD(n,m)<<endl;
 
 
 
 return 0;
}