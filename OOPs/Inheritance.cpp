#include<iostream>
using namespace std;

class Father{
    public:
    int money=500;
};

class Mother{
    public:
    string Hair="Black";
};

class Son:public Father,public Mother{

};
 
int main(){
   Son b;
   cout<<b.Hair;
   cout<<b.money;



 
 
 
 return 0;
}