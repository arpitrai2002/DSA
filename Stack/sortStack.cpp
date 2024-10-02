#include<iostream>
#include<stack>
using namespace std;

void EnterNumber(stack<int> &s,int target){
    if(s.empty() || s.top()<=target){
        s.push(target);
        return;
    }

    int temp=s.top();
    s.pop();
    EnterNumber(s,target);
    s.push(temp);
}

void sortStack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s);
    EnterNumber(s,temp);
}
 
int main(){
    stack<int> s;
    s.push(30); 
    s.push(40); 
    s.push(50); 
    s.push(4); 
    s.push(10); 

    sortStack(s);
    cout<<"Printing"<<endl;
    while(!s.empty())
    {
        /* code */
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
 
 
 
 
 return 0;
}