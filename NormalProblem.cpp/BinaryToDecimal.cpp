#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(int a){
    int digit=0;
    int i=0;
    while(a>0){
        int rem=a%10;
        digit=rem*pow(2,i++)+digit;
        a=a/10;
    }
    return digit;
}
 
int main(){
    int a;
    cout<<"Enter Binary Number ";
    cin>>a;
    cout<<"Binary To Decimal "<<BinaryToDecimal(a);

 return 0;
}