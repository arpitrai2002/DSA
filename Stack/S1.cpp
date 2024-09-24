#include<iostream>
#include<stack>
using namespace std;
 
int main(){
    stack<int> a;

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    a.pop();

    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
 
 
 return 0;
}