#include<iostream>
using namespace std;
 
int main(){
    char ch[10] ="ArpitRai";
    char* c=ch;
    cout<<ch<<endl;
    cout<<c<<endl;
    cout<<&ch<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<ch[0]<<endl;

    cout<<*(ch+3)<<endl;
    cout<<*(c+3)<<endl;
    cout<<c+2<<endl;
    cout<<ch+8<<endl;

    char name[10]="rai";
    char* a="rai";
    cout<<name<<endl;
    cout<<a<<endl;

 
 
 
 
 return 0;
}