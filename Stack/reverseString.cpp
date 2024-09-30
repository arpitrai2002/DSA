#include<iostream>
#include<stack>
#include<string>
using namespace std;
 
int main(){
    string naam="Arpit";
    stack<char> s;

    for(int i=0;i<naam.size();i++){
        s.push(naam[i]);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
 return 0;
}