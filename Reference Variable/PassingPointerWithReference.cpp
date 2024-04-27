#include<iostream>
using namespace std;

int pr(int* &p){
    p=p+1;
}
 
int main(){
    int a=5;
    int* p=&a;
    cout<<p<<endl;
    pr(p);
    cout<<p<<endl;
 
 
 
 
 
 return 0;
}