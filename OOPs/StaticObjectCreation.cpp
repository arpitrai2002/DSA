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
    Person Arpit;
    Arpit.name="Arpit";
    Arpit.age=22;

    cout<<Arpit.name<<endl;
    cout<<Arpit.age<<endl;

    Arpit.Speak();

    Arpit.SetterSalary(2000);
    cout<<"Salary "<<Arpit.GetterSalary();

 
 
 return 0;
}