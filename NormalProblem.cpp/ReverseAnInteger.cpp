#include<iostream>
using namespace std;

int reverseNumber(int n){
    int a=n;
    int revNum=0;
    int rem=0;
    while(a>0){
        rem=a%10;
        revNum=revNum*10+rem;
        a=a/10;
    }
    return revNum;
}
 
int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;

    cout<<"Reverse Of Integer "<<reverseNumber(num)<<endl;
 return 0;
}