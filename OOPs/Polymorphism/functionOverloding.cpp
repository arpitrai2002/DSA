#include<iostream>
using namespace std;
 
class Math{
    public:
    int Sum(int a,int b){
        return a+b;
    }

    int Sum(int a,int b,int c){
        return a+b+c;
    }

    int Sum(int a,float b){
        return a+b;
    }
};

int main(){
    Math m1;

    cout<<m1.Sum(10,52);
    cout<<m1.Sum(10,52,20);
    cout<<m1.Sum(10,52.65f);


 
 return 0;
}