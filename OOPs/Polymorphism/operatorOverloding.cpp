#include<iostream>
using namespace std;

class Para{
    public:
    int val;

    void operator+(Para &obj){
        int v1=this->val;
        int v2=obj.val;
        cout<<v1-v2<<endl;
    }
};
 
int main(){
    Para val1,val2;
    val1.val=10;
    val2.val=2;
    val1+val2;
 
 
 
 
 return 0;
}