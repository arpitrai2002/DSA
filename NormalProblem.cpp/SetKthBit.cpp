#include<iostream>
using namespace std;

int setBit(int n,int k){
    return((1<<k)|n);
}
 
int main(){
    int n,k;
    cout<<"Enter Number & Bit ";
    cin>>n>>k;
    cout<<"After Set Bit "<<setBit(n,k)<<endl;
 
 
 
 
 return 0;
}