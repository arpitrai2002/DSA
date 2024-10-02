#include<iostream>
#include<stack>
using namespace std;

void EnterNumber(stack<int> &s,int target){
    if(s.top()<=target){
        s.push(target);
        return;
    }

    int temp=s.top();
    s.pop();
    EnterNumber(s,target);
    s.push(temp);
}
 
int main(){
    stack<int> s;
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(50); 
    s.push(60); 

    EnterNumber(s,40);

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