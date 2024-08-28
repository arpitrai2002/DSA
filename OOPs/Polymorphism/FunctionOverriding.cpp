#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"I am Animal"<<endl;
    }
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    Dog(){
        cout<<"I am Dog"<<endl;
    }
    virtual void speak(){
        cout<<"barking"<<endl;
    }
};
 
int main(){
    Dog* a=(Dog*)new Animal();
    
 
 
 
 return 0;
}