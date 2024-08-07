#include<iostream>
using namespace std;

class Person{
    private:
    int salary;
    public:
    string name;
    int age;

    void Speak(){
        cout<<"Hindi"<<endl;
    }

    void SetterSalary(int s){
        salary=s;
    }

    int GetterSalary(){
        return salary;
    }

};

int main(){
    Person *P1=new Person;
    P1->age=12;
    P1->name="Ram";
    cout<<P1->age<<endl;
    cout<<P1->name<<endl;
 return 0;
}