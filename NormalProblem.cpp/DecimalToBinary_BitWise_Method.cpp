#include<iostream>
using namespace std;

int DecimalToBinary(int a){
    int bit=0;
    int i=1;
    while(a>0){
        int rem=a&1;
        bit=rem*i+bit;
        a=a>>1;
        i=i*10;
    }
    return bit;

}
 
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    cout<<"Number to Binary "<<DecimalToBinary(a);
 
 
 return 0;
}