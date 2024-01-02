#include<iostream>
#include<math.h>
using namespace std;

int DecimalToBinary(int a){
    int bit=0;
    int i=1;
    while(a>0){
        int rem=a%2;
        bit=rem*i+ bit;
        a=a/2;
        i=i*10;
    }
    return bit;
}
 
int main(){
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"Number Converted into Binary "<<DecimalToBinary(a);
    
 return 0;
}