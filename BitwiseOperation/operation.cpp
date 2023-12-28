#include<iostream>
using namespace std;
 
int main(){
    int a=6;
    int b=5;
    bool c=false;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<~b<<endl;
    cout<<~c<<endl;

    // left shift
    cout<<(b<<1)<<endl;

    // right shift
    cout<<(b>>1)<<endl;

 return 0;
}