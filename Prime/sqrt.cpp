#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    int sqr=sqrt(n);
    for(int i=2;i<=sqr;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
    }

int Prime(int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(isPrime(i)){
            c++;
        }
    }
    return c;
}
 
int main(){
    int n;
    cout<<"Enter a Number ";
    cin>>n;

    cout<<Prime(n)<<endl;
 
 
 
 
 
 return 0;
}