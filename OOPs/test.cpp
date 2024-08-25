#include<iostream>
using namespace std;

class Animal{
    private:
    int weight;
    public:
    int age;
    string name;

    void speak(){
        cout<<"Speaking"<<endl;
    }

    Animal(){
        cout<<"Constructer Called"<<endl;
    }
    Animal(int age){
        this->age=age;
        cout<<"Constructer 1 Called"<<endl;
    }
    Animal(int age,string name){
        this->age=age;
        this->name=name;
        cout<<"Constructer 2 Called"<<endl;
    }

    Animal(int age,string name,int weight){
        this->age=age;
        this->name=name;
        this->weight=weight;
        cout<<"Constructer 3 Called"<<endl;
    }

    void eat(){
        cout<<"Eating"<<endl;
    }
    int getWeight(){
        return weight;
    }

    void setWeight(int weight){
        this->weight=weight;
    }
};
 
int main(){
    // Animal ramesh;

    // ramesh.age=12;
    // ramesh.name="Lion";

    // cout<<ramesh.age<<endl;
    // cout<<ramesh.name<<endl;

    // ramesh.eat();
    // ramesh.speak();

    // ramesh.setWeight(12);
    // cout<<ramesh.getWeight()<<endl;

    // //dynamic
    // Animal* kaju=new Animal();
    // (*kaju).age=15;
    // kaju->name="Billo";

    // cout<<kaju->age<<endl;
    // cout<<kaju->name<<endl;

    // kaju->speak();
    // Animal b;
    // Animal* a=new Animal(12,"age",50);
    // cout<<a->age<<endl;
    // cout<<a->name<<endl;
    // cout<<a->getWeight()<<endl;

    
      



 return 0;
}