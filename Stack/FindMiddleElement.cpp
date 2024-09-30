#include<iostream>
#include<stack>
using namespace std;

void stackMiddle(stack<int> &s,int &totalsize){
    if(s.size()==(totalsize/2)+1){
        cout<<"Middle Element is "<<s.top()<<endl;
        return;
    }

    int temp=s.top();
    s.pop();
    stackMiddle(s,totalsize);
    s.push(temp);
}
 
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    

    int totalsize=s.size();
    stackMiddle(s,totalsize);

 
 
 
 return 0;
}