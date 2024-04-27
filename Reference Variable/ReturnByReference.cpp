#include<iostream>
using namespace std;

int& solve(int& x){
    cout<<"Value "<<x<<endl;
    cout<<"Address "<<&x<<endl;

    return x;
}
 
int main(){
    int a=5;
    int& b=solve(a);
    cout<<"Value "<<a<<endl;
    cout<<"Address "<<&a<<endl;
    cout<<"Value "<<b<<endl;
    cout<<"Address "<<&b<<endl;

 
 
 
 
 return 0;
}