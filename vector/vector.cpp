#include<iostream>
using namespace std;
 
int main(){
    int a=5;
    int* ptr=&a;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<*ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<*ptr*2<<endl;

    char b='b';
    char* p=&b;

    double c=1.23;
    double* q=&c;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(q)<<endl;


 
 
 
 
 return 0;
}