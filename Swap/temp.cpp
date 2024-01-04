#include<iostream>
using namespace std;

int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
     int a=7,b=6;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
 return 0;
}