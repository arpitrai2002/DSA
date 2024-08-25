#include<iostream>
using namespace std;
 
class Person{
    public:
    int number;
    string name;
// default constuctor
    Person(){
        cout<<"Constructor"<<endl;
    }

    Person(int a){
        cout<<"Constructor 2"<<endl; 
    }

    Person(int a,string name){
        this->name=name;
        this->number=a;
        cout<<"Constructor 2"<<endl; 
    }
};

int main(){
    Person *P1=new Person;
 
 
 
 
 
 return 0;
}