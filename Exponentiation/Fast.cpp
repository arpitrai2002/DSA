#include<iostream>
using namespace std;

int Fast(int a,int b){
    int ans=1;
    while(b>0){
        if(b & 1){
            ans*=a;
        }
        a*=a;
        b=b>>1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Fast(a,b)<<endl; 
 return 0;
}