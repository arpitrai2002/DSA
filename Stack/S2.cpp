#include<iostream>
using namespace std;

class Stack{
    int * arr;
    int top;
    int size;
    public:
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Over Flow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack UnderFLow, No data"<<endl;
        }
        else{
            top--;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"No Data"<<endl;
        }
        else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
};
 
int main(){
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.getSize()<<endl;

    while(!s.isempty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }

    s.pop();



 
 
 
 return 0;
}