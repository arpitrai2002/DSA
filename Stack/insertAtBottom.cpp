#include<iostream>
#include<stack>
using namespace std;

    
void insert(stack<int> &s,int &target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,target);
    s.push(temp);
} 

void insertAtBottom(stack<int>& s){
    if(s.empty()){
        cout<<"Insert can't Happened"<<endl;
        return;
    }

    int target=s.top();
    s.pop();

    insert(s,target);
}
 
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50); 

    insertAtBottom(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
 
 return 0;
}