#include<iostream>
using namespace std;

class Person{
    private:
    int salary;
    public:
    int Age;
    string name;

    void PutterSalary(int salary){
        this->salary=salary;
    }

    int GetterSalary(){
        return this->salary;
    }   
};
 
int main(){
    Person *P1=new Person;
    P1->Age=22;
    P1->name="Arpit";
    P1->PutterSalary(2000);
    cout<<P1->GetterSalary(); 

 
 return 0;
}