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

    Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;

        cout<<"I am copy Constructer"<<endl;
        
    }
};
 
int main(){
    Animal a(12,"xyz",50);
    Animal *c=new Animal(20,"A",60);
    Animal b(a);

    Animal d(*c);
    cout<<b.age<<endl;
 
 
 return 0;
}