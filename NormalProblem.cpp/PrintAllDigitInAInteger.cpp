#include<iostream>
using namespace std;

void printDigit(int n){
    int a=n;
    int rem=0;
    while(a>0){
        rem=a%10;
        cout<<rem<<" ";
        a=a/10;
    }
}
 
int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;

    cout<<"Digit of Number ";
    printDigit(num);

 return 0;
}