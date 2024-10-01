#include<iostream>
using namespace std;

class Stack{
    public:
    int * arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void Push1(int n){
        if(top2-top1==1){
            cout<<"OverFlow at Stack 1"<<endl;
        }
        else{
            top1++;
            arr[top1]=n;
        }
    }

    void Pop1(){
        if(top1==-1){
            cout<<"UnderFlow at Stack 1"<<endl;
        }
        else{
            top1--;
        }
    }

    void Push2(int n){
         if(top2-top1==1){
            cout<<"OverFlow at Stack 2"<<endl;
        }
        else{
            top2--;
            arr[top2]=n;
        }
    }

    void Pop2(){
        if(top2==size){
            cout<<"UnderFlow at Stack 2"<<endl;
        }
        else{
            top2++;
        }
    }

    void print(){
        cout<<"stack 1 "<<top1<<endl;
        cout<<"stack 2 "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<endl;

    }

};
 
int main(){
    Stack s(10);
    s.Push1(10);
    s.print();

    s.Push1(20);
    s.print();

    s.Push1(30);
    s.print();

    s.Push1(40);
    s.print();
    
    s.Push2(100);
    s.print();

    s.Push2(90);
    s.print();

    s.Push2(80);
    s.print();

    s.Push2(70);
    s.print();

    s.Push2(60);
    s.print();

    s.Push2(55);
    s.print();
    
    s.Push2(50);
    s.print();
 
 
 
 return 0;
}