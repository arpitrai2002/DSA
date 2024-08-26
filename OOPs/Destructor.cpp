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

    ~Animal(){
        cout<<"I am Destructor"<<endl;
    }
};
int main(){

    Animal a;                                   //static

    Animal* b=new Animal();
    delete b; 
 return 0;
}