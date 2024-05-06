#include<iostream>
using namespace std;

void PrintDigit(int& n){
    if(n<=0){
        return;
    }
    int rem=n%10;
    cout<<rem<<" ";
    n=n/10;
    PrintDigit(n);
    
}
 
int main(){
    int n=786;
    PrintDigit(n);
 
 
 
 
 
 return 0;
}