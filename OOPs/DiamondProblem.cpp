#include<iostream>
using namespace std;

class A{
    public:
    int a=5;
};
 
class B{
    public:
    int a=4;
};

class C:public A,public B{
};
int main(){
    C a;
    cout<<a.A::a<<endl;
 
 
 return 0;
}