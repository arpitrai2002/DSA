#include<iostream>
using namespace std;

int Slow(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}
 
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Slow(a,b)<<endl;
 
 
 
 
 
 return 0;
}